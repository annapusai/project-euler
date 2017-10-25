import java.math.*;
public class helloworld 
{
	public static void main(String args[])
	{
		int i =0;
	      BigInteger f = new BigInteger("0");
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



