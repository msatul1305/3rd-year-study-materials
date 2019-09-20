import java.io.*;
import java.util.*;

class LeakyBucket{
	public static void main(String args[]){
		int no_of_queries,storage,output_pkt_size;
		int input_pkt_size,bucket_size,size_left;
		storage=0;
		no_of_queries=5;
		
		bucket_size=10;
		input_pkt_size=4;
		output_pkt_size=1;
		for(int i=0;i<no_of_queries;i++){
			size_left=bucket_size-storage;
			if(input_pkt_size<=(size_left)){
				storage+=input_pkt_size;
				System.out.println("Buffer size="+storage+" out of bucket size="+bucket_size);
				}
			else{
				System.out.println("Packet loss="+(input_pkt_size-(size_left)));
				storage=bucket_size;
				System.out.println("Buffer size="+storage+" out of bucket size="+bucket_size);
				}
				storage-=output_pkt_size;
		}
	}
}
