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
                $picker.find('.kmap-search-term').focusout(function(e) {
                    if ($reset.is(':hover')) {
                        $(e.target).kmapsTypeahead('setValue', '', true);
                    }
                    $reset.hide();
                    return false;
                });
            });
        },
        detach: function (context, settings) {
        }
    };
})(jQuery);