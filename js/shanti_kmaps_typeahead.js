/**
 * Created by edwardjgarrett on 8/2/16.
 */

(function ($) {

    Drupal.behaviors.shantiKmapsAdminTypeahead = {

        attach: function (context, settings) {

            var admin = settings.shanti_kmaps_admin;

            $('.kmap-typeahead-picker').once('shanti-kmaps').each(function () {
                var $typeahead = $('.kmap-search-term', this);
                var $searchreset = $('button.searchreset', this);
                $searchreset.click(function() {
                   console.log('reset search'); 
                });
            });
        },

        detach: function (context, settings) {

        }

    };

})(jQuery);