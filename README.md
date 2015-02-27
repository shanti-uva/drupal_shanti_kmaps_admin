# SHANTI KMaps Admin
A module to define site wide variables, accessible by `variable_get()`, that are shared by all the SHANTI KMaps modules. This module also exposes the variables to the JavaScript environment, using Drupal's JavaScript API, as Drupal.settings. 

The variables defined by the module are the following:

* `shanti_kmaps_admin_asset_types`: A canonical list of Mandala asset types, e.g. places, subjects, texts, etc.
* `shanti_kmaps_admin_server_places`: The URL to the Rails KMaps site page that stores KMap terms for Places.
* `shanti_kmaps_admin_server_places_explore`: The URL to the Mandala site page that shows the KMap Explorer for Places.
* `shanti_kmaps_admin_server_solr`: The URL to the Solr Index server that stores information about KMaps IDs and their associated Drupal assets.
* `shanti_kmaps_admin_server_solr_opt_in`: Allows the user to decide of the site should be indexed or not.
* `shanti_kmaps_admin_server_subjects`: The URL to the Rails KMaps site page that stores KMap terms for Subjects.
* `shanti_kmaps_admin_server_subjects_explorer`: The URL to the Mandala site page that shows the KMap Explorer for Subjects.

The module provides the following menu items to the user:

* `admin/config/content/shanti_kmaps_admin`: This is the admin page where the above variables are set. This page is filled at first with default values and explains the required formats for values.
* `shanti_kmaps_admin/test`: A page that shows the names and current values of the variables.
* `shanti_kmaps_admin/vars_json`: A page that provides the variable names and values in raw JSON.

THe following functions are available to those writing modules:
* `shanti_kmaps_admin_get_asset_types()`: Returns an array of the asset type names, which are stored internally as a comma delimited string.
* `shanti_kmaps_admin_get_vars()`: Returns an array of variables and their values. The keys of this array are just the variable names defined by the module and available through `variable_get()`.

