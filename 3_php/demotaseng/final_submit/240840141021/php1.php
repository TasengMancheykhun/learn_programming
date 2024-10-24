<html>
<?php
$a= 3;
$b=7;
$c=12;
if($a>$b){
    if ($b>$c){
        echo "Greatst no is: ",$a;

    }

} else if ($b>$a){
    if($a>$c){
        echo "Greatst no is: ",$b;
    }else{
        echo "Greatst no is: ",$c;
    }
}
else
{
    echo "hi";
}


?>

</html>

