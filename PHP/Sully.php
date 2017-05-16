#!/usr/bin/php
<?php
$i=5;
if($i){if($argv[0]!='./Sully.php')$i--;if(($f=fopen('Sully_'.$i.'.php','w+'))){$str="#!/usr/bin/php%c<?php%c%ci=%d;%cif(%ci){if(%cargv[0]!='./Sully.php')%ci--;if((%cf=fopen('Sully_'.%ci.'.php','w+'))){%cstr=%c%s%c;fprintf(%cf,%cstr,10,10,36,%ci,10,36,36,36,36,36,36,34,%cstr,34,36,36,36,36,36,36,36,10);fclose(%cf);chmod('./Sully_'.%ci.'.php','777');system('./Sully_'.%ci.'.php');}}?>%c";fprintf($f,$str,10,10,36,$i,10,36,36,36,36,36,36,34,$str,34,36,36,36,36,36,36,36,10);fclose($f);chmod('./Sully_'.$i.'.php','777');system('./Sully_'.$i.'.php');}}?>
