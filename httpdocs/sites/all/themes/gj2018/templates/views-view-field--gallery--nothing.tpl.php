<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php print $output; 
$path = 'imagegallery/';
$file = file_load($row->field_data_field_gallery_image_field_gallery_image_fid);
$uri = $file->filename;
$tifuri = preg_replace('"\.jpg$"', '.tif', $uri);

$image300 = image_style_url('productgallery300', $path.$uri);
$image600 = image_style_url('productgallery600', $path.$uri);
$image1100 = image_style_url('productgallery1100', $path.$uri);
$image2500 = image_style_url('productgallery2500', $path.$uri);

print '<div class="product-image-links"><ul>';
print '<li><a href="'.$image2500.'" download="'.$uri.'"><strong>High resolution JPG file</strong>, 300 dpi - 2500 px</a></p></li>';
print '<li><p><a href="/sites/default/files/imagegallery/'.$tifuri.'" download="'.$tifuri.'"><strong>Max TIF file resolution for printing</strong>, 300 dpi - 30 MB</a></p></li>';
print '<li><p><a href="'.$image1100.'" download="'.$uri.'"><strong>For Word (printing)</strong>, 150 dpi (max 20 CM) - 1100 px</a></p></li>';
print '<li><p><a href="'.$image600.'" download="'.$uri.'"><strong>PowerPoint</strong>, 72 dpi (max 20 cm) - 600 px</a></p></li>';
print '<li><p><a href="'.$image300.'" download="'.$uri.'"><strong>WEB</strong>, 72 dpi (max 10 cm) - 300 px</a></p></li>';




print '</ul></div>';

?>
