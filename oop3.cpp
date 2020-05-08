public class PrinterWindows;
{
	public string Name {get;set;}
	
	public void WindowsPrinter()
	{
		Console.Writeline("Epson");
		Console.Writeline("Canon");
		Console.Writeline("LaserJet");
	}
}

public class Epson : PrinterWindows
{
	public override void printer()
	{
		Console.Writeline("printer : 1. Epson");
	}
}

public class Canon : PrinterWindows
{
	public override void printer()
	{
		Console.Writeline("printer : 2. Canon");
	}
}

public class LaserJet : PrinterWindows
{
	public override void printer()
	{
		Console.Writeline("printer : 3. LaserJet");
	}
}

static void Main(string[] args)
{
	PrinterWindows printer;
	
	Console.Writeline("Pilih Printer: ");
	Console.Writeline("1. Epson");
	Console.Writeline("2. Canon");
	Console.Writeline("3. LaserJet");
	
	Console.Writeline("nomor printer [1..3]: ");
	int nomorPrinter = convert.ToInt32(Console.ReadLine());
	
	if (nomorPrinter == 1)
		printer = new Epson();
	else if (nomorPrinter == 2)
		printer = new Canon();
	else 
		printer = new LaserJet();
	
	printer.Show();
	printer.Print();
	
	console.ReadKey();
}
	