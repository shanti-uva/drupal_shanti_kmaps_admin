/**
 * Created by edwardjgarrett on 8/2/16.
 */

(function ($) {
    Drupal.behaviors.shantiKmapsAdminTypeahead = {
        attach: function (context, settings) {
            $('.kmap-typeahead-picker').once('shanti-kmaps').each(function () {
                var $xbtn = $('button.searchreset', this);
                var $srch = $(".kmap-search-term:not(.kmaps-tt-hint)", this);  // the main search input
                $srch.data("holder", $srch.attr("placeholder"));
                // --- focusin - focusout
                $srch.focusin(function () {
                    console.log('in');
                    $srch.attr("placeholder", "");
                    $xbtn.show(); //("fast");
                }).focusout(function () {
                    console.log('out');
                    // see http://stackoverflow.com/questions/13980448/jquery-focusout-click-conflict
                    if (!$xbtn.hasClass('resetting') && $xbtn.is(':hover')) {
                        $xbtn.addClass('resetting');
                        $srch.kmapsTypeahead('setValue', '', false);
                        window.setTimeout(function () {
                            $xbtn.removeClass('resetting');
                            $xbtn.hide();
                        }, 300);
                    }

                    $srch.attr("placeholder", $srch.data("holder"));
                    // $xbtn.hide();

                    var str = $srch.data("holder"); //"Enter Search...";
                    var txt = $srch.val();

                    if (str.indexOf(txt) > -1) {
                        $xbtn.hide();
                        return true;
                    } else {
                        // $xbtn.show(100);
                        return false;
                    }
                });

                $xbtn.click(function() {
                    $xbtn.addClass('resetting');
                    $srch.kmapsTypeahead('setValue', '', false);
                    window.setTimeout(function () {
                        $xbtn.removeClass('resetting');
                        $xbtn.hide();
                    }, 300);
                });
            });
        },
        detach: function (context, settings) {
        }
    };
})(jQuery);