public class Student {
	private String number;
	private String name;
	private String gender;

	Student() {

	}

	Student(String number, String name, String gender) {
		this.number = number;
		this.name = name;
		this.gender = gender;
	}

	public String getNumber() {
		return number;
	}

	public String getName() {
		return name;
	}

	public String getGender() {
		return gender;
	}

	public static void main(String[] args) {
		Student s = new Student("1001", "zhangsan", "girl");
		System.out.println("stuentInfo:sno:"+s.getNumber()+",name:"+s.getName()+",sex:"+s.getGender());
	}
}
