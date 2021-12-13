model BJT_CE_config
import Modelica.Electrical.*;
Analog.Sources.ConstantVoltage v1(V = 0);
Analog.Sources.ConstantCurrent i1(I=20e-3);
Analog.Sources.ConstantVoltage v_u_ic1(V = 0);
Analog.Semiconductors.NPN q1(Is=14.34e-15 ,Vak=0.013508037282182899 ,Bf=400 ,Br=6.092 ,Cjc=7.306e-12 ,Mc=.3416 ,Phic=.75 ,Cje=22.01e-12 ,Me=.377 ,Phie=.75 ,Taur=46.91e-9 ,Tauf=411.1e-12 ,Ccs=1e-12 );
Analog.Basic.Resistor r1(R = 1e3);
Analog.Basic.Resistor r2(R = 1e3);
Analog.Basic.Ground g;
protected
Modelica.Electrical.Analog.Interfaces.Pin nvce, ngnd, nnet_r1pad1_, nnet_q1pad1_, nnet_q1pad2_, nib;
equation
connect(v1.p,nvce);
connect(v1.n,ngnd);
connect(r1.p,nnet_r1pad1_);
connect(r1.n,nnet_q1pad1_);
connect(r2.p,nnet_q1pad2_);
connect(r2.n,nib);
connect(i1.p,nib);
connect(i1.n,ngnd);
connect(q1.C,nnet_q1pad1_);
connect(q1.B,nnet_q1pad2_);
connect(q1.E,ngnd);
connect(v_u_ic1.p,nvce);
connect(v_u_ic1.n,nnet_r1pad1_);
connect(g.p,ngnd);
end BJT_CE_config;
