public class Example {
	public static void main(String args[]) {
		ChinesePeople chinesePeople   = new ChinesePeople();
		AmericanPeople americanPeople = new AmericanPeople();
		BeijingPeople beijingPeople   = new BeijingPeople();
		chinesePeople.speakHello();
		americanPeople.speakHello();
		beijingPeople.speakHello();
		chinesePeople.averageHeight();
		americanPeople.averageHeight();
		beijingPeople.averageHeight();
		chinesePeople.averageWeight();
		americanPeople.averageWeight();
		beijingPeople.averageWeight();
		chinesePeople.chinaKongfu();
		americanPeople.americanBoxing();
		beijingPeople.BeijingOpera();
		beijingPeople.chinaKongfu();
	}
}
