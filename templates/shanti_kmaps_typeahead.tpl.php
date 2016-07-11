<!--
 Available variables:
   $namespace - used by the javascript to coordinate related filters and typeahead inputs
   $type - the type of filter, feature_type or associated_subject
   $display - the user-facing unpluralized filter name, Feature Type or Associated Subject
-->

<div id="<?php print $namespace; ?>-typeahead-wrapper"
     class="kmap-typeahead-picker">
    <label><span>Search:</span> Select KMaps <?php print $domain; ?></label>
    <input id="<?php print $namespace; ?>-search-term"
           class="kmap-search-term form-control form-text" type="text"
           placeholder="Search <?php print $domain; ?>">
</div>