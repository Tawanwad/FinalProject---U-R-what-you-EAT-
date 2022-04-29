

void OpenFile(Avatar *U1, Avatar *U2, Avatar *U3, Avatar *U4, Avatar *U5, Avatar *U6, Avatar *U7)
{
  string s;
  int space, count=0;
  float BMIval;
  
  ifstream infile("Avatar.txt");
    
  while (getline(infile,s))
  {
    //cout << s << endl;
    space = s.find(',');
    U1[count].N = s.substr(0, space);
    s = s.substr(space+1);
    space = s.find(',');
    U2[count].A = stod(s.substr(0, space));
    s = s.substr(space+1);
    space = s.find(',');
    U3[count].G = s.substr(0, space);
    s = s.substr(space+1);
    space = s.find(',');
    U4[count].H = stod(s.substr(0, space));
    s = s.substr(space+1);
    space = s.find(',');
    U5[count].W = stod(s.substr(0, space));
    s = s.substr(space+1);
    space = s.find(',');
    U6[count].E = stod(s.substr(0, space));
    
    BMIval = U5[count].W / pow(U4[count].H, 2);
    U7[count].B = BMIval;
    
    count++;
      
  }
  infile.close();
}

void WriteFile(Avatar *V1, Avatar *V2, Avatar *V3, Avatar *V4, Avatar *V5, Avatar *V6)
{
  ofstream outfile("Avatar.txt");
  int a=0;
  while (V1[a].N != "")
  {
    outfile << V1[a].N << ',' << V2[a].A << ',' << V3[a].G << ',' << V4[a].H << ',' << V5[a].W << ',' << V6[a].E << endl;
    a++;
  }
  
  outfile.close();
}