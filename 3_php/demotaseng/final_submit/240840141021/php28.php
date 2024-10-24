<?php

$content = $_POST["mytext"];

$fileptr=fopen("newfile.txt","a");
fwrite($fileptr, $content);
fclose($fileptr);
?>