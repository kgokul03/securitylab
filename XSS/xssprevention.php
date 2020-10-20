<?php

function clean($string)
{
return preg_replace('/<[^>]*>/', '', $string);
}

if(isset($_POST['sub']))
{
$name = $_POST['name'];
$name = clean($name);
echo "You entered <br> ".$name;
}
?>
<!DOCTYPE html>
<html>
<head>
<title>XSS</title>
</head>
<body>
<form method = "post">
<br>
<label>Enter the text : </label>
<br>
<input type="text" name="name">
<button type="submit" name="sub">Submit</button>
</form>
</body>
</html>

