public class a{
	public static void learn(){
		System.out.println(Byte.MAX_VALUE);
		System.out.println(Byte.MIN_VALUE);
		System.out.println(Long.MAX_VALUE);
		System.out.println(Long.MIN_VALUE);
	}
	public static void learnl()
	{
		int a = 1;
		int b = 2;
		System.out.println("结果是"+a+b);
	}
	public static void learnll(){
		long a = 12345678901234567890;
		int b = a;//不能通过
	}
	public static void main(String[] args){
		learn();
		learnl();
	}
}
