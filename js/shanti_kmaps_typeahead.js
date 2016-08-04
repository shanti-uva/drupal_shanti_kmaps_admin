/**
 * Created by edwardjgarrett on 8/2/16.
 */

(function ($) {
    Drupal.behaviors.shantiKmapsAdminTypeahead = {
        attach: function (context, settings) {
            $('.kmap-typeahead-picker').once('shanti-kmaps').each(function () {
                var $picker = $(this);
                // see http://stackoverflow.com/questions/13980448/jquery-focusout-click-conflict
                var processing = false;
                $picker.find('.kmap-search-term').focusout(function(e) {
                    if (!processing) {
                        if ($picker.find($('button.searchreset:hover')).length) {
                            processing = true;
                            window.setTimeout(function () {
                                $(e.target).kmapsTypeahead('setValue', '', false);
                                processing = false;
                            }, 100);
                        }
                    }
                });
            });
        },
        detach: function (context, settings) {
        }
    };
})(jQuery);