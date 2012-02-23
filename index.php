<?php include_once 'functions.inc'; ?>
<!DOCTYPE html>
<html>
  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <title>Php Web ScreenShot</title>
  </head>
  <body>
    <h1>PHP Web ScreenShot</h1>
    <?php
    // put your code here
    if (isset($_POST['url'])) echo webScreenshot($_POST['url']);
    ?>
    <form action="index.php" method="POST" id="web-scrrenshot-form">
      <input type="text" name="url" value="http://" />
      <input type="submit" value="Create Web ScreenShot" />
    </form>
  </body>
</html>
