<?php
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

function webScreenshot($url,$format=NULL,$size=NULL,$crop=NULL,$crop_position=NULL,$quality=NULL) {
  if(isset($format)){
    switch ($format) {
      case "jpg":
        $fileformat = $format;
        $format = " -f $format";
        break;
      case "png":
        $fileformat = $format;
        $format = " -f $format";
        break;
      default:
        return '<div class="error"><strong>Error:</strong> Only "jpg" and "png" are supported.</div>';
    }
  } else {
    $fileformat = "jpg";
  }
  
  $filename = md5($url.date("c")); //
  $cmd = "./wkhtmltoimage$format $url webscreenshots/$filename.$fileformat >> wkhtmltoimage.log";
  exec($cmd);
  return '<div id="web-screenshot">'."<div>$cmd</div>".'<a href="'.$url.'"><img src="'."webscreenshots/$filename.$fileformat".'" alt="Web ScreenShot" /></a></div>';
}

