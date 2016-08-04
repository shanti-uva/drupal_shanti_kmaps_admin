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
                $picker.find('.kmap-search-term').focusout(function (e) {
                    if (!$reset.hasClass('resetting') && $reset.is(':hover')) {
                        $reset.addClass('resetting');
                        $(e.target).kmapsTypeahead('setValue', '', false);
                        window.setTimeout(function () {
                            $reset.removeClass('resetting');
                            $reset.hide();
                        }, 300);
                    }
                });
            });
        },
        detach: function (context, settings) {
        }
    };
})(jQuery);