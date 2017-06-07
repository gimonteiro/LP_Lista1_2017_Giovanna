#!/usr/bin/env perl

my ($n,$s,$resp2);
$Resl=0.000000;
$n= <STDIN>;
if($n >=1){
    for($cont=1;$cont<=$n;$cont=$cont+1){
        $s= ((2*$cont-1)**(2*$cont-1))/((2*$cont)**(2*$cont));
        if($cont == 1){
            $resp2= $resp2 + $s;
        }elsif ($cont > 1){
            if($cont%2 ==0){
                $resp2= $resp2 + $s;
            }
            if($cont%2 !=0){
                $resp2= $resp2 * $s;
            }
            
        }
        
    }
    print "$resp2 \n";
}
