#!/usr/bin/php
<?php
/*
	commentaire1
*/
function f(){}function main()
{
/*
	commentaire2
*/
}
$a='#!/usr/bin/php%c<?php%c/*%c%ccommentaire1%c*/%cfunction f(){}function main()%c{%c/*%c%ccommentaire2%c*/%c}%c%ca=%c%s%c;printf($a,10,10,10,9,10,10,10,10,10,9,10,10,10,36,39,$a,39,10,10);f();main();%c?>%c';printf($a,10,10,10,9,10,10,10,10,10,9,10,10,10,36,39,$a,39,10,10);f();main();
?>
