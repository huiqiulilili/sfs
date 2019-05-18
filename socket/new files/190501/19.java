public class a{
	public static void yunsuan(){
		int a = 1;
		int b = 2;
		if(a != 1 &	 ++b>2 ){
			
		}else{
			System.out.printf("%d",b);
		}
	}
	public static void fore_each(int[] array){
		for(int item : array){
			System.out.println(item);
		}
	}
	public static int xiang_cheng(int n ){
		if(n == 0){
			return 1;
		}else{
			return xiang_cheng(n - 1) * n;
		}
	}
	public static int xiang_jia(int n){
		if(n == 1){
			return 1;
	}else{
		return xiang_jia(n - 1) + n;
	}
	}
	//e = 1 + 1/1! + 1/2! + 1/3! + 1/4! + ...
	public static double qiu(int n){
		double e = 0.0;
		for(int i = 0;i < n;i ++){
			e = e + 1.0/xiang_cheng(i);
		}
		return e;
	}
	public static double qiu_jing(int n){
		double e = 0;
		for(int i = 0;i <= n;i ++){
			if(1.0/xiang_cheng(i) < 0.001){
				break;
			}else{
				e = e + 1.0/xiang_cheng(i);
			}
		}
		return e;
	}
	//Pi / 4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 - ...
	public static double pi(int n){
		double s = 0;
		for(int i = 0;i <= n;i ++){
			if(i % 2 == 0){
				s = s + 1.0 / (2 * i + 1);
			}else{
				s = s - 1.0 / (2 * i + 1);
			}
		}
		return s * 4;
	}
	//反转
	public static String reverse(String s){
		int length = s.length();
		String r = "";
		for(int i = length - 1;i >= 0;i -- ){
			char c = s.charAt(i);
			r = r + c;
	}
	return r;
	}
	//十进制转十六进制
	public static String shi_liu(int n){
		String s = "";
		while(n >= 16){
			int r = n % 16;
			n = n / 16;
			if(r < 10){
				s = s + r;
			}else{
				s = s + (char)('A'+r -10);
			}
		}
		if(n != 0){
			s =s + n;
		}
		return reverse(s);
	}
	public static String decToHex(int dec) {
		 String s = "";
		 while(dec >=16){
			 int r = dec % 16;
			 dec = dec / 16;
			 if(r < 10){
				 s = s + r;
			 }else{
				 s = s + (char)(r - 10 + 'A');
			 }
		 }
		 if(dec != 0){
			 s = s + dec;	
		 }
		return reverse(s);
	 }
	public static void main(String[] args){
		//yunsuan();
		//fore_each(new int[]{1,2,3,4,5});
		//System.out.println(xiang_jia(3));
		//System.out.println(xiang_cheng(3));
		//System.out.println(qiu(30));
		//System.out.println(qiu_jing(30));
		//System.out.println(pi(500));
		//System.out.println(reverse("hello"));
		System.out.println(shi_liu(16557));
		System.out.println(decToHex(16557));
	}
}
