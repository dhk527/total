#!/bin/perl

use strict;
use warnings;

mkdir "test_filespl";

my $output_file;
my $bin_file;

foreach my $bin_file (<*.bin>)
{
	 $output_file = "bin_filespl/$bin_file.txt";
	`xxd $bin_file > $output_file`;
}

print " success"
