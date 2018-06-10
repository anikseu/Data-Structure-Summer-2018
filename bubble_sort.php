<?php 

# Bubble Sort Algorithm
# Data Structure Course
# Summer 2018

function bubble_sort($arrayName, $n){
	for($j=0; $j<=$n-2; $j++){
		for($i=0; $i<=$n-2-$j; $i++){
				if($arrayName[$i]>$arrayName[$i+1]){
					// Swaping A[i], A[i+1]
					$tmp1=$arrayName[$i]; 
					$tmp2=$arrayName[$i+1];
					$arrayName[$i+1]=$tmp1; 
					$arrayName[$i]=$tmp2; 
				}
			}
		}
		//return the Array
		return $arrayName; 
	}

	function printArray($arrayName, $n){
		for($i=0; $i<$n; $i++){
			printf($arrayName[$i]);
			printf(" ");
		}
	}

	// Declaring array with elements 5 4 3 2 1
	$arrayName = array('0' => 5, '1' => 4, '2' => 3, '3' => 2, '4' => 1);

	// applying the bubble_sort algorithm 
	$sorted_array=bubble_sort($arrayName, 5);
	printArray($sorted_array, 5); 

?>
