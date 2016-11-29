#include<cmath>
#pragma once

namespace projGUI22 {

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
	private: System::Windows::Forms::Button^  btn7;
	protected: 
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btnAdicao;
	private: System::Windows::Forms::Button^  btnLimpa;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btnSubtracao;
	private: System::Windows::Forms::Button^  btnFatorial;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btnMultiplicacao;
	private: System::Windows::Forms::Button^  btnPotencia;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnVirgula;
	private: System::Windows::Forms::Button^  btnPosNeg;
	private: System::Windows::Forms::Button^  btnDivisao;
	private: System::Windows::Forms::Button^  btnRaizQuadrada;
	private: System::Windows::Forms::Label^  lblDisplay;
	private: System::Windows::Forms::Button^  btnIgual;

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
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnAdicao = (gcnew System::Windows::Forms::Button());
			this->btnLimpa = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnSubtracao = (gcnew System::Windows::Forms::Button());
			this->btnFatorial = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnMultiplicacao = (gcnew System::Windows::Forms::Button());
			this->btnPotencia = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnVirgula = (gcnew System::Windows::Forms::Button());
			this->btnPosNeg = (gcnew System::Windows::Forms::Button());
			this->btnDivisao = (gcnew System::Windows::Forms::Button());
			this->btnRaizQuadrada = (gcnew System::Windows::Forms::Button());
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->btnIgual = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(8, 67);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(60, 61);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(74, 67);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(60, 61);
			this->btn8->TabIndex = 0;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(140, 67);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(60, 61);
			this->btn9->TabIndex = 0;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btnAdicao
			// 
			this->btnAdicao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnAdicao->Location = System::Drawing::Point(206, 67);
			this->btnAdicao->Name = L"btnAdicao";
			this->btnAdicao->Size = System::Drawing::Size(60, 61);
			this->btnAdicao->TabIndex = 0;
			this->btnAdicao->Text = L"+";
			this->btnAdicao->UseVisualStyleBackColor = true;
			this->btnAdicao->Click += gcnew System::EventHandler(this, &Form1::btnAdicao_Click);
			// 
			// btnLimpa
			// 
			this->btnLimpa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnLimpa->Location = System::Drawing::Point(272, 67);
			this->btnLimpa->Name = L"btnLimpa";
			this->btnLimpa->Size = System::Drawing::Size(60, 61);
			this->btnLimpa->TabIndex = 0;
			this->btnLimpa->Text = L"CE";
			this->btnLimpa->UseVisualStyleBackColor = true;
			this->btnLimpa->Click += gcnew System::EventHandler(this, &Form1::btnLimpa_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(8, 134);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(60, 61);
			this->btn4->TabIndex = 0;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(74, 134);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(60, 61);
			this->btn5->TabIndex = 0;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(140, 134);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(60, 61);
			this->btn6->TabIndex = 0;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btnSubtracao
			// 
			this->btnSubtracao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSubtracao->Location = System::Drawing::Point(206, 134);
			this->btnSubtracao->Name = L"btnSubtracao";
			this->btnSubtracao->Size = System::Drawing::Size(60, 61);
			this->btnSubtracao->TabIndex = 0;
			this->btnSubtracao->Text = L"-";
			this->btnSubtracao->UseVisualStyleBackColor = true;
			this->btnSubtracao->Click += gcnew System::EventHandler(this, &Form1::btnSubtracao_Click);
			// 
			// btnFatorial
			// 
			this->btnFatorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnFatorial->Location = System::Drawing::Point(272, 134);
			this->btnFatorial->Name = L"btnFatorial";
			this->btnFatorial->Size = System::Drawing::Size(60, 61);
			this->btnFatorial->TabIndex = 0;
			this->btnFatorial->Text = L"n!";
			this->btnFatorial->UseVisualStyleBackColor = true;
			this->btnFatorial->Click += gcnew System::EventHandler(this, &Form1::btnFatorial_Click);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(8, 201);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(60, 61);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(74, 201);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(60, 61);
			this->btn2->TabIndex = 0;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(140, 201);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(60, 61);
			this->btn3->TabIndex = 0;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btnMultiplicacao
			// 
			this->btnMultiplicacao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnMultiplicacao->Location = System::Drawing::Point(206, 201);
			this->btnMultiplicacao->Name = L"btnMultiplicacao";
			this->btnMultiplicacao->Size = System::Drawing::Size(60, 61);
			this->btnMultiplicacao->TabIndex = 0;
			this->btnMultiplicacao->Text = L"×";
			this->btnMultiplicacao->UseVisualStyleBackColor = true;
			this->btnMultiplicacao->Click += gcnew System::EventHandler(this, &Form1::btnMultiplicacao_Click);
			// 
			// btnPotencia
			// 
			this->btnPotencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPotencia->Location = System::Drawing::Point(272, 201);
			this->btnPotencia->Name = L"btnPotencia";
			this->btnPotencia->Size = System::Drawing::Size(60, 61);
			this->btnPotencia->TabIndex = 0;
			this->btnPotencia->Text = L"xʸ";
			this->btnPotencia->UseVisualStyleBackColor = true;
			this->btnPotencia->Click += gcnew System::EventHandler(this, &Form1::btnPotencia_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(8, 268);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(60, 61);
			this->btn0->TabIndex = 0;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btnVirgula
			// 
			this->btnVirgula->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnVirgula->Location = System::Drawing::Point(74, 268);
			this->btnVirgula->Name = L"btnVirgula";
			this->btnVirgula->Size = System::Drawing::Size(60, 61);
			this->btnVirgula->TabIndex = 0;
			this->btnVirgula->Text = L",";
			this->btnVirgula->UseVisualStyleBackColor = true;
			this->btnVirgula->Click += gcnew System::EventHandler(this, &Form1::btnVirgula_Click);
			// 
			// btnPosNeg
			// 
			this->btnPosNeg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPosNeg->Location = System::Drawing::Point(140, 268);
			this->btnPosNeg->Name = L"btnPosNeg";
			this->btnPosNeg->Size = System::Drawing::Size(60, 61);
			this->btnPosNeg->TabIndex = 0;
			this->btnPosNeg->Text = L"±";
			this->btnPosNeg->UseVisualStyleBackColor = true;
			this->btnPosNeg->Click += gcnew System::EventHandler(this, &Form1::btnPosNeg_Click);
			// 
			// btnDivisao
			// 
			this->btnDivisao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnDivisao->Location = System::Drawing::Point(206, 268);
			this->btnDivisao->Name = L"btnDivisao";
			this->btnDivisao->Size = System::Drawing::Size(60, 61);
			this->btnDivisao->TabIndex = 0;
			this->btnDivisao->Text = L"/";
			this->btnDivisao->UseVisualStyleBackColor = true;
			this->btnDivisao->Click += gcnew System::EventHandler(this, &Form1::btnDivisao_Click);
			// 
			// btnRaizQuadrada
			// 
			this->btnRaizQuadrada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnRaizQuadrada->Location = System::Drawing::Point(272, 268);
			this->btnRaizQuadrada->Name = L"btnRaizQuadrada";
			this->btnRaizQuadrada->Size = System::Drawing::Size(60, 61);
			this->btnRaizQuadrada->TabIndex = 0;
			this->btnRaizQuadrada->Text = L" √";
			this->btnRaizQuadrada->UseVisualStyleBackColor = true;
			this->btnRaizQuadrada->Click += gcnew System::EventHandler(this, &Form1::btnRaizQuadrada_Click);
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::Color::White;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(7, 10);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(334, 47);
			this->lblDisplay->TabIndex = 1;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnIgual
			// 
			this->btnIgual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnIgual->Location = System::Drawing::Point(109, 335);
			this->btnIgual->Name = L"btnIgual";
			this->btnIgual->Size = System::Drawing::Size(118, 47);
			this->btnIgual->TabIndex = 2;
			this->btnIgual->Text = L"=";
			this->btnIgual->UseVisualStyleBackColor = true;
			this->btnIgual->Click += gcnew System::EventHandler(this, &Form1::btnIgual_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepPink;
			this->ClientSize = System::Drawing::Size(344, 392);
			this->Controls->Add(this->btnIgual);
			this->Controls->Add(this->lblDisplay);
			this->Controls->Add(this->btnRaizQuadrada);
			this->Controls->Add(this->btnDivisao);
			this->Controls->Add(this->btnPotencia);
			this->Controls->Add(this->btnMultiplicacao);
			this->Controls->Add(this->btnFatorial);
			this->Controls->Add(this->btnPosNeg);
			this->Controls->Add(this->btnSubtracao);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btnLimpa);
			this->Controls->Add(this->btnVirgula);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btnAdicao);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
		#define MAXDIGITOS 16
		bool flagVirgula;
		bool flagResultado;
		char operacao;
		double memoria;
		void LiberaDisplay()
		{
			flagVirgula=false;
			flagResultado=false;
			lblDisplay->Text="0";
		}
		double fatorial(double numero)
		{
			return(numero>1)? numero*fatorial(numero-1) : 1;
		}


#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 flagVirgula=false;
				 flagResultado=false;
				 memoria=0.0;
				 operacao='\0';
			 }
private: System::Void btnLimpa_Click(System::Object^  sender, System::EventArgs^  e) {
			 LiberaDisplay();
		 }
private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length<MAXDIGITOS)
			 {
				 if(lblDisplay->Text!="0")
					 lblDisplay->Text=lblDisplay->Text+"0";
				 if(flagResultado)
				 {
					 lblDisplay->Text="0";
					 flagResultado=false;
				 }
			 }

		 }
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length<MAXDIGITOS)
			 {
				 if(lblDisplay->Text!="0" && !flagResultado)
					 lblDisplay->Text=lblDisplay->Text+"1";
				 else
					 lblDisplay->Text="1";
				 flagResultado=false;
			 }
		 }
private: System::Void btnVirgula_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length<MAXDIGITOS-1)
			 {
				 if(!flagVirgula)
				 {
						lblDisplay->Text=lblDisplay->Text+",";
						flagVirgula=true;
				 }
			 }
		 }
private: System::Void btnPosNeg_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Substring(0,1)=="-")
				 lblDisplay->Text=lblDisplay->Text->Substring(1);
			 else
				 lblDisplay->Text=lblDisplay->Text + "-";
		 }
private: System::Void btnRaizQuadrada_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero=System::Convert::ToDouble(lblDisplay->Text);
			 lblDisplay->Text=System::Convert::ToString(sqrt(numero));
			 flagResultado=true;
		 }
private: System::Void btnAdicao_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria=System::Convert::ToDouble(lblDisplay->Text);
			 operacao='+';
			 LiberaDisplay();
		 }
private: System::Void btnSubtracao_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria=System::Convert::ToDouble(lblDisplay->Text);
			 operacao='-';
			 LiberaDisplay();
		 }

private: System::Void btnMultiplicacao_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria=System::Convert::ToDouble(lblDisplay->Text);
			 operacao='*';
			 LiberaDisplay();
		 }
private: System::Void btnDivisao_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria=System::Convert::ToDouble(lblDisplay->Text);
			 operacao='/';
			 LiberaDisplay();
		 }
private: System::Void btnIgual_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero=System::Convert::ToDouble(lblDisplay->Text);
			 switch(operacao)
			 {
			 case '+':memoria+=numero;
				 break;
			 case '-':memoria-=numero;
				 break;
			 case '*':memoria*=numero;
				 break;
			 case '/':memoria/=numero;
				 break;
			 case '^':memoria=Math::Pow(memoria,numero);
				 break;
			 }
			 if(memoria>Math::Pow(10,MAXDIGITOS)-1)
				 lblDisplay->Text=memoria.ToString("e");
			 else
				 lblDisplay->Text=memoria.ToString();
			 flagResultado=true;
		
		 }
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length<MAXDIGITOS)
			 {
				 if(lblDisplay->Text!="0" && !flagResultado)
					 lblDisplay->Text=lblDisplay->Text+"2";
				 else
					 lblDisplay->Text="2";
				 flagResultado=false;
			 }
		 }
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length<MAXDIGITOS)
			 {
				 if(lblDisplay->Text!="0" && !flagResultado)
					 lblDisplay->Text=lblDisplay->Text+"3";
				 else
					 lblDisplay->Text="3";
				 flagResultado=false;
			 }
		 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length<MAXDIGITOS)
			 {
				 if(lblDisplay->Text!="0" && !flagResultado)
					 lblDisplay->Text=lblDisplay->Text+"4";
				 else
					 lblDisplay->Text="4";
				 flagResultado=false;
			 }
		 }
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length<MAXDIGITOS)
			 {
				 if(lblDisplay->Text!="0" && !flagResultado)
					 lblDisplay->Text=lblDisplay->Text+"5";
				 else
					 lblDisplay->Text="5";
				 flagResultado=false;
			 }
		 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length<MAXDIGITOS)
			 {
				 if(lblDisplay->Text!="0" && !flagResultado)
					 lblDisplay->Text=lblDisplay->Text+"6";
				 else
					 lblDisplay->Text="6";
				 flagResultado=false;
			 }
		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length<MAXDIGITOS)
			 {
				 if(lblDisplay->Text!="0" && !flagResultado)
					 lblDisplay->Text=lblDisplay->Text+"7";
				 else
					 lblDisplay->Text="7";
				 flagResultado=false;
			 }
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length<MAXDIGITOS)
			 {
				 if(lblDisplay->Text!="0" && !flagResultado)
					 lblDisplay->Text=lblDisplay->Text+"8";
				 else
					 lblDisplay->Text="8";
				 flagResultado=false;
			 }
		 }
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length<MAXDIGITOS)
			 {
				 if(lblDisplay->Text!="0" && !flagResultado) 
					 lblDisplay->Text=lblDisplay->Text+"9";
				 else
					 lblDisplay->Text="9";
				 flagResultado=false;
			 }
		 }
private: System::Void btnPotencia_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria=System::Convert::ToDouble(lblDisplay->Text);
			 operacao='^';
			 LiberaDisplay();

		 }
private: System::Void btnFatorial_Click(System::Object^  sender, System::EventArgs^  e) {
			  double numero=System::Convert::ToDouble(lblDisplay->Text);
			  numero=fatorial(numero);
			  if(numero>Math::Pow(10,MAXDIGITOS)-1)
				  lblDisplay->Text=numero.ToString("e");
			  else
				  lblDisplay->Text=numero.ToString();
			 flagResultado=true;


		 }
};
}

