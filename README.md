# drupal_shanti_kmaps_admin
A module to define site wide variables, accessible by `variable_get()`, that is shared by all the SHANTI KMaps modules.


The variables defined by the module are the following:

* `shanti_kmaps_admin_asset_types`
* `shanti_kmaps_admin_server_places`
* `shanti_kmaps_admin_server_places_explore`
* `shanti_kmaps_admin_server_solr`
* `shanti_kmaps_admin_server_solr_opt_in`
* `shanti_kmaps_admin_server_subjects`
* `shanti_kmaps_admin_server_subjects_explorer`

The module provides the following menu items to `:the user:

* `admin/config/content/shanti_kmaps_admin`: This is the admin page where the above variables are set. This page is filled at first with default values and explains the required formats for values.
* `shanti_kmaps_admin/test`: A page that shows the names and current values of the variables.
* `shanti_kmaps_admin/vars_json`: A page that provides the variable names and values in raw JSON.

THe following functions are available to those writing modules:
* `shanti_kmaps_admin_get_asset_types()`: Returns an array of the asset type names, which are stored internally as a comma delimited string.
* `shanti_kmaps_admin_get_vars()`: Returns an array of variables and their values. The keys of this array are just the variable names defined by the module and available through `variable_get()`.

