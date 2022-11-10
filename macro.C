{
  
  double n=10000000;
  double n2=0;
  
  TRandom3 rnd;
  double  L=0.01;
  double  d=0.2;
  
  rnd.SetSeed(123456789);
  double n1=0;
  
    for(int i=0;i<n;i++){
      
      double phi=2*TMath::Pi()*rnd.Rndm();
      double costhe=2*rnd.Rndm()-1;
      double the=acos(costhe);
      double alpha=d/costhe;
      double x=alpha*cos(phi)*sin(the);
      double y=alpha*sin(phi)*sin(the);

      if(abs(x) <L/2 && abs(y)<L/2)
	n1++;
      if(x>0 && x<L && y>0 && y<L)
	n2++;
      
    }
    double p=n1/n;
    double ep=sqrt(p*(1-p2)/n);
    cout << "calcolo esatto (Montecarlo) " << n1/n << endl;
    cout << "approssimazione per L<<d " << L*L/(4*TMath::Pi()*d*d) << endl;
    double p2=n2/n;
    double ep2=sqrt(p2*(1-p2)/n);
    
}
