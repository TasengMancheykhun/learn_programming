<?php

$website = array("www.google.com", "www.msn.com", "www.amazon.co.in", "in.answers.yahoo.com", "en.m.wikipedia.com", "codehs.gitbooks.io", "www.coderanch.com");

$arr=[];
foreach($website as $i){
	if ((strpos($i,"www")) === 0){
		#echo $i."<br>";
		array_push($arr,$i);
	}
}

echo "The total number of such sites are: ".count($arr)."<br>";

?>
