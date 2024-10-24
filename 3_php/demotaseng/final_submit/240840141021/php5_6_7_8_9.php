<?php
function sqr($a){
    echo "Squar of $a : ".$a*$a."<br>";
}
for ($i=1;$i<=20;$i++)
{
    sqr($i);
}





function calc($b,$c,$d){
    switch ($d){
        case "+" :
        echo "Addition is : ".$b+$c."<br>";
        break ;
        case "-" :
        echo "Substraction is : ".$b-$c."<br>";
        break ;
        case "*" :
        echo "multiplication is : ".$b*$c."<br>";
        break ;
        case "/" :
        echo "Division is : ".$b/$c."<br>";
        break ;

    
    }
}

calc(3,2,"*");



function rtr($r,$s){
    $t=1;
    for ($i=1;$i<=$s;$i++){
        $t*=$r;
        echo "<br>";
       }
       echo $t."<br>";
       
}
rtr(5,3);






function joinstr(...$a){
    for ( $i=1;$i<count($a);$i++){
        if ($i == count($a)-1 ){
            echo "$a[$i]";
        }
        else {
            echo "$a[$i]"."$a[0]";
        }

    }

     
} 
joinstr("#","aaa","bbb","ccc","ddd");

echo "<br>";




function avg(...$a){
    $sumN=0;
    $sumP=0;
    $avg=0;
    for ($i=0;$i<count($a);$i++){
        if ( $a[$i] > 0 ){
            $sumP += $a[$i];
            #echo"$sumP";
        }elseif ( $a[$i] < 0 ){
            $sumN += $a[$i];
           
        }else{
        
        }
        

    }
    $avg=($sumP+$sumN)/count($a);
    echo "Average is :".$avg."<br>";
    echo "Sum of positive no :".$sumP."<br>";
    echo "Sum of negative no :".$sumN."<br>";


} 
avg(1,4,-3,0,6,7);


?>



