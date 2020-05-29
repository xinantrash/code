import java.util.ArrayList;

public class NoteBook{
	private ArrayList<String> notes = new ArrayList<String>();

	public void add(String s)
	{
		notes.add(s);
	}

	public void insert(String s , int index)
	{
		notes.add(index,s);
	}

	public int getSize()
	{
		return notes.size();
	}

	public String getNote(int index)
	{
		return notes.get(index);
	}

	public void removeNote(int index)
	{
		notes.remove(index);
	}

	public String[] list()
	{
		String[] a = new String[notes.size()];
		notes.toArray(a);
		return a;
	}

	public static void main(String[] args)
	{
		NoteBook nb = new NoteBook();
		nb.add("First");
		nb.add("Second");
		nb.add("Third");
		String[] a = nb.list();
		for( String s : a )
		{
			System.out.println(s);
		}
	}
}
