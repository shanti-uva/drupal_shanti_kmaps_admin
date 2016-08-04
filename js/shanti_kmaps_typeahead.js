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
                $picker.find('.kmap-search-term').focusout(function(e) {
                    var $typeahead = $(e.target);
                    if ($picker.find($('button.searchreset:hover')).length) {
                        console.log('doing it');
                        $typeahead.kmapsTypeahead('setValue', '', false);
                    }
                });
            });
        },

        detach: function (context, settings) {

        }

    };

})(jQuery);