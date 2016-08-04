/**
 * Created by edwardjgarrett on 8/2/16.
 */

(function ($) {

    Drupal.behaviors.shantiKmapsAdminTypeahead = {

        attach: function (context, settings) {

            var admin = settings.shanti_kmaps_admin;

            $('.kmap-typeahead-picker').once('shanti-kmaps').each(function () {
                var $picker = $(this);
                // see http://stackoverflow.com/questions/13980448/jquery-focusout-click-conflict
                var processing = false;
                $picker.find('.kmap-search-term').focusout(function(e) {
                    // var $typeahead = $(e.target);
                    if (!processing) {
                        if ($picker.find($('button.searchreset:hover')).length) {
                            processing = true;
                            window.setTimeout(function () {
                                console.log('processed');
                                processing = false;
                            }, 100);
                            //$typeahead.kmapsTypeahead('setValue', '', false);
                        }
                    }
                });
            });
        },

        detach: function (context, settings) {

        }

    };

})(jQuery);