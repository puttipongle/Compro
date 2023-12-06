using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
        string txt = "Hello world!";
        string result = txt.Substring(0,4);
        int result1 = txt.IndexOf("world");
        string result2 = txt.Replace("Hello","Cat");
        Console.WriteLine (result);
        Console.WriteLine (result1);
        Console.WriteLine (result2);
    }
}