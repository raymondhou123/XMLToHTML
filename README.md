# XML to HTML Converter

This C++ program converts XML data to HTML format. It reads an XML file containing CD catalog information, processes the data, and generates an HTML file with a formatted table.

## Usage

### Prerequisites

- C++ compiler
- Standard Template Library (STL)

### Building the Program

Compile the program using a C++ compiler. For example:

```
g++ XmlToHtml.cpp -o XmlToHtml
```

### Running the Program 

Execute the compiled program with the XML file as a command-line argument.

```
./XmlToHtml cd_catalog.xml
```

### Input

The program expects an XML file with stucture similar to provided `cd_catalog.xml`. Each `<CD>` entry represents a CD with various attributes.

### Output

The output is a HTML file containing the formatted table representing the CD catalog

### Example 

If you run the given example
```
./XmlToHtml cd_catalog.xml
```

the output should be a html file 
```
<!DOCTYPE html>
<html>
<head>
   <title>CD Catalog</title>
</head>
<body>
   <table>
       <tr>
           <th>Title</th>
           <th>Artist</th>
           <th>Country</th>
           <th>Company</th>
           <th>Price</th>
           <th>Year</th>
       </tr>
       <tr>
           <td>Mad Dogs and Englishmen</td>
           <td>Joe Cocker</td>
           <td>USA</td>
           <td>A&amp;M</td>
           <td>9.80</td>
           <td>1970</td>
       </tr>
       <tr>
           <td>Empire Burlesque</td>
           <td>Bob Dylan</td>
           <td>USA</td>
           <td>Columbia</td>
           <td>10.90</td>
           <td>1985</td>
       </tr>
       <tr>
           <td>Hide your heart</td>
           <td>Bonnie Tyler</td>
           <td>UK</td>
           <td>CBS Records</td>
           <td>9.90</td>
           <td>1988</td>
       </tr>
       <tr>
           <td>Greatest Hits</td>
           <td>Dolly Parton</td>
           <td>USA</td>
           <td>RCA</td>
           <td>9.90</td>
           <td>1982</td>
       </tr>
       <tr>
           <td>Still got the blues</td>
           <td>Gary Moore</td>
           <td>UK</td>
           <td>Virgin records</td>
           <td>10.20</td>
           <td>1990</td>
       </tr>
       <tr>
           <td>Eros</td>
           <td>Eros Ramazzotti</td>
           <td>EU</td>
           <td>BMG</td>
           <td>9.90</td>
           <td>1997</td>
       </tr>
       <tr>
           <td>One night only</td>
           <td>Bee Gees</td>
           <td>UK</td>
           <td>Polydor</td>
           <td>10.90</td>
           <td>1998</td>
       </tr>
       <tr>
           <td>Sylvias Mother</td>
           <td>Dr.Hook</td>
           <td>UK</td>
           <td>CBS</td>
           <td>8.10</td>
           <td>1973</td>
       </tr>
       <tr>
           <td>Maggie May</td>
           <td>Rod Stewart</td>
           <td>UK</td>
           <td>Pickwick</td>
           <td>8.50</td>
           <td>1990</td>
       </tr>
       <tr>
           <td>Romanza</td>
           <td>Andrea Bocelli</td>
           <td>EU</td>
           <td>Polydor</td>
           <td>10.80</td>
           <td>1996</td>
       </tr>
       <tr>
           <td>When a man loves a woman</td>
           <td>Percy Sledge</td>
           <td>USA</td>
           <td>Atlantic</td>
           <td>8.70</td>
           <td>1987</td>
       </tr>
       <tr>
           <td>Black angel</td>
           <td>Savage Rose</td>
           <td>EU</td>
           <td>Mega</td>
           <td>10.90</td>
           <td>1995</td>
       </tr>
       <tr>
           <td>1999 Grammy Nominees</td>
           <td>Many</td>
           <td>USA</td>
           <td>Grammy</td>
           <td>10.20</td>
           <td>1999</td>
       </tr>
       <tr>
           <td>For the good times</td>
           <td>Kenny Rogers</td>
           <td>UK</td>
           <td>Mucik Master</td>
           <td>8.70</td>
           <td>1995</td>
       </tr>
       <tr>
           <td>Tupelo Honey</td>
           <td>Van Morrison</td>
           <td>UK</td>
           <td>Polydor</td>
           <td>8.20</td>
           <td>1971</td>
       </tr>
       <tr>
           <td>Soulsville</td>
           <td>Jorn Hoel</td>
           <td>Norway</td>
           <td>WEA</td>
           <td>7.90</td>
           <td>1996</td>
       </tr>
       <tr>
           <td>The very best of</td>
           <td>Cat Stevens</td>
           <td>UK</td>
           <td>Island</td>
           <td>8.90</td>
           <td>1990</td>
       </tr>
       <tr>
           <td>Stop</td>
           <td>Sam Brown</td>
           <td>UK</td>
           <td>A and M</td>
           <td>8.90</td>
           <td>1988</td>
       </tr>
       <tr>
           <td>Bridge of Spies</td>
           <td>T'Pau</td>
           <td>UK</td>
           <td>Siren</td>
           <td>7.90</td>
           <td>1987</td>
       </tr>
       <tr>
           <td>Private Dancer</td>
           <td>Tina Turner</td>
           <td>UK</td>
           <td>Capitol</td>
           <td>8.90</td>
           <td>1983</td>
       </tr>
       <tr>
           <td>Midt om natten</td>
           <td>Kim Larsen</td>
           <td>EU</td>
           <td>Medley</td>
           <td>7.80</td>
           <td>1983</td>
       </tr>
       <tr>
           <td>Pavarotti Gala Concert</td>
           <td>Luciano Pavarotti</td>
           <td>UK</td>
           <td>DECCA</td>
           <td>9.90</td>
           <td>1991</td>
       </tr>
       <tr>
           <td>The dock of the bay</td>
           <td>Otis Redding</td>
           <td>USA</td>
           <td>Atlantic</td>
           <td>7.90</td>
           <td>1987</td>
       </tr>
       <tr>
           <td>Picture book</td>
           <td>Simply Red</td>
           <td>EU</td>
           <td>Elektra</td>
           <td>7.20</td>
           <td>1985</td>
       </tr>
       <tr>
           <td>Red</td>
           <td>The Communards</td>
           <td>UK</td>
           <td>London</td>
           <td>7.80</td>
           <td>1987</td>
       </tr>
       <tr>
           <td>Unchain my heart</td>
           <td>Joe Cocker</td>
           <td>USA</td>
           <td>EMI</td>
           <td>8.20</td>
           <td>1987</td>
       </tr>
   </table>
</body>
</html>

```
