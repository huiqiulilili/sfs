public class aa{
	public static void learn(){
		System.out.println(Byte.MIN_VALUE);
		System.out.println(Byte.MAX_VALUE);
		
	}
	public static void learnStringAdd(){
	   int a = 3;
	   int b = 4;
	   System.out.println("结果是"+a+b);
	}
	public static void learnTypeCast(){
		long a = 100L;
		int b = 100;
		a = b;
	}
	public static void main(String[] args){
		learnStringAdd();
		learn();
		learnTypeCast();
		}
}
