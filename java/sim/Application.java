public class Application {

	public static void main(String[] args) {
		MobileTelephone mobileTelephone = new MobileTelephone();
		SIM chinaMobile = new SIMOfChinaMobile();
		SIM chinaUnicom = new SIMOfChinaUnicom();
		chinaMobile.setNumber("13887656432");
		chinaUnicom.setNumber("13097656437");
		mobileTelephone.useSIM(chinaMobile);
		mobileTelephone.showMsg();
		mobileTelephone.useSIM(chinaUnicom);
		mobileTelephone.showMsg();
	}
}
