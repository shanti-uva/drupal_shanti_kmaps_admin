/**
 * Created by edwardjgarrett on 8/2/16.
 */

(function ($) {

    Drupal.behaviors.shantiKmapsAdminTypeahead = {

        attach: function (context, settings) {

            var admin = settings.shanti_kmaps_admin;

            $('.kmap-typeahead-picker').once('shanti-kmaps').each(function () {
                var $picker = $(this);
                var $typeahead = $('.kmap-search-term', this);
                // var $searchreset = $('button.searchreset', this);
                $typeahead.focusout(function() {
                    console.log('focusout');
                    if ($('button.searchreset:hover', $picker).length) {
                        console.log('clicked');
                    }
                });
            });
        },

        detach: function (context, settings) {

        }

    };

})(jQuery);