package helloworld;

import java.io.*;
import java.math.*;
import java.util.*;



public class helloworld 
{
	public static void main(String args[]) throws IOException
	{
			int i =0;
	      BigInteger f = new BigInteger("0");
	      //BigInteger a = new 
	      while(i++<20_00_000)
	      {	
	    	  
	    	  BigInteger a = BigInteger.valueOf(i);
	    	  if(a.isProbablePrime(10)){
	    		  f=f.add(a);  
	    	  }
	    	  
	      }
	      
	  System.out.println(f);
		
	}
}



