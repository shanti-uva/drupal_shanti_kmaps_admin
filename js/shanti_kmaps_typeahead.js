/**
 * Created by edwardjgarrett on 8/2/16.
 */

(function ($) {
    Drupal.behaviors.shantiKmapsAdminTypeahead = {
        attach: function (context, settings) {
            $('.kmap-typeahead-picker').once('shanti-kmaps').each(function () {
                var $picker = $(this);
                var $reset = $picker.find('button.searchreset');
                // see http://stackoverflow.com/questions/13980448/jquery-focusout-click-conflict
                var processing = false;
                $picker.find('.kmap-search-term').focusout(function(e) {
                    if (!processing) {
                        if ($reset.is(':hover')) {
                            processing = true;
                            $(e.target).kmapsTypeahead('setValue', '', false);
                            window.setTimeout(function () {
                                processing = false;
                            }, 2000);
                            $reset.hide();
                            return true;
                        }
                    }
                });
            });
        },
        detach: function (context, settings) {
        }
    };
})(jQuery);