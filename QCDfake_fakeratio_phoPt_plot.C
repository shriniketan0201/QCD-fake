void QCDfake_fakeratio_phoPt_plot()
{
//=========Macro generated from canvas: c/canvas
//=========  (Sat Jun  4 00:32:45 2022) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "canvas",0,0,700,640);
   gStyle->SetOptStat(0);
   c->Range(65.65999,-0.0375,1107.26,0.3375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx3001[5] = {
   237.5,
   275,
   350,
   500,
   800};
   Double_t _fy3001[5] = {
   0.1634643,
   0.05896251,
   0.03039195,
   0.01196657,
   0.01635077};
   Double_t _felx3001[5] = {
   12.5,
   25,
   50,
   100,
   200};
   Double_t _fely3001[5] = {
   0.003187984,
   0.001040641,
   0.0006733965,
   0.0003667306,
   0.004091443};
   Double_t _fehx3001[5] = {
   12.5,
   25,
   50,
   100,
   200};
   Double_t _fehy3001[5] = {
   0.003187984,
   0.001509454,
   0.0006733965,
   0.0009598834,
   0.002467478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,147.5,1077.5);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(0.3);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3001->SetLineColor(ci);
   Graph_Graph3001->GetXaxis()->SetRange(9,92);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(999);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3001->GetXaxis()->SetTickLength(0);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(999);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3001->GetYaxis()->SetTickLength(0);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("ap");
   TLatex *   tex = new TLatex(0.61023,0.907173,"41.5 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18092,0.837173,"#bf{CMS} #it{Preliminary}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.181948,0.182496,0.565903,0.288532,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("","Corrected Num./Den.","P E L");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TGaxis *gaxis = new TGaxis(221.9,0,1003.1,0,221.9,1003.1,510,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.045);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Photon #it{p}_{T} [GeV]");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(221.9,0.3,1003.1,0.3,221.9,1003.1,510,"-");
   gaxis->SetLabelOffset(999);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(62);
   gaxis->Draw();
   gaxis = new TGaxis(221.9,0,221.9,0.3,0,0.3,510,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1.5);
   gaxis->SetTitleSize(0.045);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("QCD fake ratio");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(1003.1,0,1003.1,0.3,0,0.3,510,"+");
   gaxis->SetLabelOffset(999);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(62);
   gaxis->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
