#!/usr/bin/perl

use strict;
use warnings;

#open CSV_file

open my $fh, '<', '../compare_randint_123.csv' or die 'Could not open file: $!';
# < is read, > is overwrite, >> is append

#read first line(header)
my $header = <$fh>;
my @results;

#read line respectly

while (my $line = <$fh>){
	chomp $line; #chomp delete '\n'
	my ($Value, $Test) = split /,/, $line;

# Only print 'Pass'
	if($Test eq 'Pass'){
		push @results, "Pass: $Value";
	}
}
my $output = join("\n",@results);
my $output_file = 'output.log';
open(my $log_fh, '>', $output_file) or die "Cannot open $output_file: $!";
print $log_fh $output;
close $log_fh;

close $fh;
