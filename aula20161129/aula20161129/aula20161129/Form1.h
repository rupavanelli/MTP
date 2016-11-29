#include<cmath>
#pragma once

namespace calc1c {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 




















	private: System::Windows::Forms::Label^  lbldisplay;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btnmais;
	private: System::Windows::Forms::Button^  btnapaga;









	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btnmenos;
	private: System::Windows::Forms::Button^  btnfat;





	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btnvezes;
	private: System::Windows::Forms::Button^  btnexp;





	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btndot;
	private: System::Windows::Forms::Button^  btnposneg;



	private: System::Windows::Forms::Button^  btndivisao;
	private: System::Windows::Forms::Button^  btnraiz;



	private: System::Windows::Forms::Button^  btnigual;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->lbldisplay = (gcnew System::Windows::Forms::Label());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnmais = (gcnew System::Windows::Forms::Button());
			this->btnapaga = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnmenos = (gcnew System::Windows::Forms::Button());
			this->btnfat = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnvezes = (gcnew System::Windows::Forms::Button());
			this->btnexp = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btndot = (gcnew System::Windows::Forms::Button());
			this->btnposneg = (gcnew System::Windows::Forms::Button());
			this->btndivisao = (gcnew System::Windows::Forms::Button());
			this->btnraiz = (gcnew System::Windows::Forms::Button());
			this->btnigual = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbldisplay
			// 
			this->lbldisplay->BackColor = System::Drawing::Color::White;
			this->lbldisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbldisplay->Font = (gcnew System::Drawing::Font(L"Humnst777 Blk BT", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbldisplay->Location = System::Drawing::Point(0, 0);
			this->lbldisplay->Name = L"lbldisplay";
			this->lbldisplay->Size = System::Drawing::Size(322, 72);
			this->lbldisplay->TabIndex = 21;
			this->lbldisplay->Text = L"0";
			this->lbldisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(12, 167);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(52, 47);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(70, 167);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(52, 47);
			this->btn8->TabIndex = 0;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(128, 167);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(52, 47);
			this->btn9->TabIndex = 0;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btnmais
			// 
			this->btnmais->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnmais->Location = System::Drawing::Point(186, 167);
			this->btnmais->Name = L"btnmais";
			this->btnmais->Size = System::Drawing::Size(52, 47);
			this->btnmais->TabIndex = 0;
			this->btnmais->Text = L"+";
			this->btnmais->UseVisualStyleBackColor = true;
			this->btnmais->Click += gcnew System::EventHandler(this, &Form1::btnmais_Click);
			// 
			// btnapaga
			// 
			this->btnapaga->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnapaga->Location = System::Drawing::Point(244, 167);
			this->btnapaga->Name = L"btnapaga";
			this->btnapaga->Size = System::Drawing::Size(52, 47);
			this->btnapaga->TabIndex = 0;
			this->btnapaga->Text = L"ce";
			this->btnapaga->UseVisualStyleBackColor = true;
			this->btnapaga->Click += gcnew System::EventHandler(this, &Form1::btnapaga_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(12, 220);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(52, 47);
			this->btn4->TabIndex = 0;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(70, 220);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(52, 47);
			this->btn5->TabIndex = 0;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(128, 220);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(52, 47);
			this->btn6->TabIndex = 0;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btnmenos
			// 
			this->btnmenos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnmenos->Location = System::Drawing::Point(186, 220);
			this->btnmenos->Name = L"btnmenos";
			this->btnmenos->Size = System::Drawing::Size(52, 47);
			this->btnmenos->TabIndex = 0;
			this->btnmenos->Text = L"-";
			this->btnmenos->UseVisualStyleBackColor = true;
			this->btnmenos->Click += gcnew System::EventHandler(this, &Form1::btnmenos_Click);
			// 
			// btnfat
			// 
			this->btnfat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnfat->Location = System::Drawing::Point(244, 220);
			this->btnfat->Name = L"btnfat";
			this->btnfat->Size = System::Drawing::Size(52, 47);
			this->btnfat->TabIndex = 0;
			this->btnfat->Text = L"n!";
			this->btnfat->UseVisualStyleBackColor = true;
			this->btnfat->Click += gcnew System::EventHandler(this, &Form1::btnfat_Click);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(12, 273);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(52, 47);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(70, 273);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(52, 47);
			this->btn2->TabIndex = 0;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(128, 273);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(52, 47);
			this->btn3->TabIndex = 0;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btnvezes
			// 
			this->btnvezes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnvezes->Location = System::Drawing::Point(186, 273);
			this->btnvezes->Name = L"btnvezes";
			this->btnvezes->Size = System::Drawing::Size(52, 47);
			this->btnvezes->TabIndex = 0;
			this->btnvezes->Text = L"x";
			this->btnvezes->UseVisualStyleBackColor = true;
			this->btnvezes->Click += gcnew System::EventHandler(this, &Form1::btnvezes_Click);
			// 
			// btnexp
			// 
			this->btnexp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnexp->Location = System::Drawing::Point(244, 273);
			this->btnexp->Name = L"btnexp";
			this->btnexp->Size = System::Drawing::Size(52, 47);
			this->btnexp->TabIndex = 0;
			this->btnexp->Text = L"xʸ";
			this->btnexp->UseVisualStyleBackColor = true;
			this->btnexp->Click += gcnew System::EventHandler(this, &Form1::btnexp_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(12, 326);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(52, 47);
			this->btn0->TabIndex = 0;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btndot
			// 
			this->btndot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btndot->Location = System::Drawing::Point(70, 326);
			this->btndot->Name = L"btndot";
			this->btndot->Size = System::Drawing::Size(52, 47);
			this->btndot->TabIndex = 0;
			this->btndot->Text = L",";
			this->btndot->UseVisualStyleBackColor = true;
			this->btndot->Click += gcnew System::EventHandler(this, &Form1::btndot_Click);
			// 
			// btnposneg
			// 
			this->btnposneg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnposneg->Location = System::Drawing::Point(128, 326);
			this->btnposneg->Name = L"btnposneg";
			this->btnposneg->Size = System::Drawing::Size(52, 47);
			this->btnposneg->TabIndex = 0;
			this->btnposneg->Text = L"±";
			this->btnposneg->UseVisualStyleBackColor = true;
			this->btnposneg->Click += gcnew System::EventHandler(this, &Form1::btnposneg_Click);
			// 
			// btndivisao
			// 
			this->btndivisao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btndivisao->Location = System::Drawing::Point(186, 326);
			this->btndivisao->Name = L"btndivisao";
			this->btndivisao->Size = System::Drawing::Size(52, 47);
			this->btndivisao->TabIndex = 0;
			this->btndivisao->Text = L"÷";
			this->btndivisao->UseVisualStyleBackColor = true;
			this->btndivisao->Click += gcnew System::EventHandler(this, &Form1::btndivisao_Click);
			// 
			// btnraiz
			// 
			this->btnraiz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnraiz->Location = System::Drawing::Point(244, 326);
			this->btnraiz->Name = L"btnraiz";
			this->btnraiz->Size = System::Drawing::Size(52, 47);
			this->btnraiz->TabIndex = 0;
			this->btnraiz->Text = L"√¯";
			this->btnraiz->UseVisualStyleBackColor = true;
			this->btnraiz->Click += gcnew System::EventHandler(this, &Form1::btnraiz_Click);
			// 
			// btnigual
			// 
			this->btnigual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnigual->Location = System::Drawing::Point(70, 379);
			this->btnigual->Name = L"btnigual";
			this->btnigual->Size = System::Drawing::Size(168, 47);
			this->btnigual->TabIndex = 22;
			this->btnigual->Text = L"=";
			this->btnigual->UseVisualStyleBackColor = true;
			this->btnigual->Click += gcnew System::EventHandler(this, &Form1::btnigual_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Crimson;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(321, 438);
			this->Controls->Add(this->btnigual);
			this->Controls->Add(this->lbldisplay);
			this->Controls->Add(this->btnraiz);
			this->Controls->Add(this->btnexp);
			this->Controls->Add(this->btnfat);
			this->Controls->Add(this->btnapaga);
			this->Controls->Add(this->btndivisao);
			this->Controls->Add(this->btnvezes);
			this->Controls->Add(this->btnmenos);
			this->Controls->Add(this->btnmais);
			this->Controls->Add(this->btnposneg);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btndot);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn7);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Calculadora ";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
		#define maxdigitos 15
		bool flagvirgula;
		double memoria;
		char operacao;
		bool flagresultado;
		void liberadisplay()
		{
			lbldisplay->Text="0";
			 flagvirgula= false;
			 flagresultado=false;
		}
		double fatorial(double numero)
		{
			return(numero>1)? numero*fatorial(numero-1):1;
		}
#pragma endregion
		
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 flagvirgula= false;
			 flagresultado= false;
			 memoria=0.0;
			 operacao='\0';
		 }
private: System::Void btnapaga_Click(System::Object^  sender, System::EventArgs^  e) {
			 liberadisplay();
		 }

private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(lbldisplay->Text->Length<maxdigitos){
			 if(lbldisplay->Text!="0")
				 lbldisplay->Text=lbldisplay->Text+ "0";
			 if(flagresultado){
				  lbldisplay->Text="0";
				  flagresultado=false;
			 }


		 }
		 }
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
		if(lbldisplay->Text->Length<maxdigitos){
			 if(lbldisplay->Text != "0" && !flagresultado)
				 lbldisplay->Text=lbldisplay->Text + "1";
			 else
			 {
				 lbldisplay->Text= "1";
				flagresultado=false;
			 }
		 }
	}
private: System::Void btndot_Click(System::Object^  sender, System::EventArgs^  e) {
		if(lbldisplay->Text->Length<maxdigitos-1)
			 if(!flagvirgula){
					lbldisplay->Text=lbldisplay->Text + ",";
						flagvirgula=true;}


		 }

private: System::Void btnposneg_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lbldisplay->Text!= "0")
			 //double numero = System::Convert::toDouble(lbldisplay->Text);
			 //lbldisplay->Text= System::Convert::toString(numero*(-1));
			 if(lbldisplay->Text->Substring(0,1) == "-")
				 lbldisplay->Text=lbldisplay->Text->Substring(1);
			 else
				 lbldisplay->Text = "-" + lbldisplay->Text;
		 }
private: System::Void btnraiz_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero = System::Convert::ToDouble(lbldisplay->Text);
			 lbldisplay->Text= System::Convert::ToString(sqrt(numero));
		 }

private: System::Void btnmais_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria= System::Convert::ToDouble(lbldisplay->Text);
			 operacao= '+';
			liberadisplay();

		 }
private: System::Void btnigual_Click(System::Object^  sender, System::EventArgs^  e) {
			double numero = System::Convert::ToDouble(lbldisplay->Text);
			switch(operacao)
			{
			case '+':memoria+=numero;break;
			case '-':memoria-=numero;break;
			case '*':memoria*=numero;break;
			case '/':memoria/=numero;break;
			case '^':memoria=Math::Pow(memoria,numero);break;
			}
			if(memoria > Math::Pow(10,maxdigitos)-1)
				lbldisplay->Text=memoria.ToString("e");
			else
				lbldisplay->Text=memoria.ToString();
			flagresultado=true;
		 }
private: System::Void btnmenos_Click(System::Object^  sender, System::EventArgs^  e) {
			  memoria= System::Convert::ToDouble(lbldisplay->Text);
			 operacao= '-';
			liberadisplay();
		 }
private: System::Void btnvezes_Click(System::Object^  sender, System::EventArgs^  e) {
			  memoria= System::Convert::ToDouble(lbldisplay->Text);
			 operacao= '*';
			liberadisplay();
		 }
private: System::Void btndivisao_Click(System::Object^  sender, System::EventArgs^  e) {
			  memoria= System::Convert::ToDouble(lbldisplay->Text);
			 operacao= '/';
			liberadisplay();
		 }
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lbldisplay->Text->Length<maxdigitos){
			 if(lbldisplay->Text != "0" && !flagresultado)
				 lbldisplay->Text=lbldisplay->Text + "2";
			 else
			 {
				 lbldisplay->Text= "2";
				flagresultado=false;
			 }
		 }
		}
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lbldisplay->Text->Length<maxdigitos){
			 if(lbldisplay->Text != "0" && !flagresultado)
				 lbldisplay->Text=lbldisplay->Text + "3";
			 else
			 {
				 lbldisplay->Text= "3";
				flagresultado=false;
			 }
		 }
		}
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lbldisplay->Text->Length<maxdigitos){
			 if(lbldisplay->Text != "0" && !flagresultado)
				 lbldisplay->Text=lbldisplay->Text + "4";
			 else
			 {
				 lbldisplay->Text= "4";
				flagresultado=false;
			 }
		 }
		}
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lbldisplay->Text->Length<maxdigitos){
			 if(lbldisplay->Text != "0" && !flagresultado)
				 lbldisplay->Text=lbldisplay->Text + "5";
			 else
			 {
				 lbldisplay->Text= "5";
				flagresultado=false;
			 }
		 }
	}
private: System::Void btnexp_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria= System::Convert::ToDouble(lbldisplay->Text);
			 operacao= '^';
			liberadisplay();
		 }
private: System::Void btnfat_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero=System::Convert::ToDouble(lbldisplay->Text);
			 if(numero > Math::Pow(10,maxdigitos)-1)
				lbldisplay->Text=numero.ToString("e");
			else
				lbldisplay->Text=numero.ToString();
			flagresultado=true;

		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lbldisplay->Text->Length<maxdigitos){
			 if(lbldisplay->Text != "0" && !flagresultado)
				 lbldisplay->Text=lbldisplay->Text + "7";
			 else
			 {
				 lbldisplay->Text= "7";
				flagresultado=false;
			 }
		 }
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lbldisplay->Text->Length<maxdigitos){
			 if(lbldisplay->Text != "0" && !flagresultado)
				 lbldisplay->Text=lbldisplay->Text + "8";
			 else
			 {
				 lbldisplay->Text= "8";
				flagresultado=false;
			 }
		 }
		 }
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lbldisplay->Text->Length<maxdigitos){
			 if(lbldisplay->Text != "0" && !flagresultado)
				 lbldisplay->Text=lbldisplay->Text + "9";
			 else
			 {
				 lbldisplay->Text= "9";
				flagresultado=false;
			 }
		 }
		 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lbldisplay->Text->Length<maxdigitos){
			 if(lbldisplay->Text != "0" && !flagresultado)
				 lbldisplay->Text=lbldisplay->Text + "6";
			 else
			 {
				 lbldisplay->Text= "6";
				flagresultado=false;
			 }
			 }

		 }
};
}