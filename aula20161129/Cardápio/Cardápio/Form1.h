#pragma once

namespace Cardápio {

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
	private: System::Windows::Forms::Label^  btnBemVindo;
	private: System::Windows::Forms::CheckBox^  ckbEntrada;
	private: System::Windows::Forms::CheckBox^  ckbPrato;
	private: System::Windows::Forms::ComboBox^  cmbOpcaoEntrada;
	private: System::Windows::Forms::ComboBox^  cmbOpcaoPrato;
	private: System::Windows::Forms::RadioButton^  rdbPimenta;
	private: System::Windows::Forms::RadioButton^  rdbCreamCheese;
	private: System::Windows::Forms::RadioButton^  rdbBacon;
	private: System::Windows::Forms::Button^  bntPedido;
	private: System::Windows::Forms::Label^  lblResPedido;
	private: System::Windows::Forms::CheckBox^  ckbBebida;
	private: System::Windows::Forms::ComboBox^  cmbBebida;
	private: System::Windows::Forms::Label^  lblAdicionais;



	private: System::Windows::Forms::Button^  btnConta;
	private: System::Windows::Forms::Label^  label2;

	protected: 





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
			this->btnBemVindo = (gcnew System::Windows::Forms::Label());
			this->ckbEntrada = (gcnew System::Windows::Forms::CheckBox());
			this->ckbPrato = (gcnew System::Windows::Forms::CheckBox());
			this->cmbOpcaoEntrada = (gcnew System::Windows::Forms::ComboBox());
			this->cmbOpcaoPrato = (gcnew System::Windows::Forms::ComboBox());
			this->rdbPimenta = (gcnew System::Windows::Forms::RadioButton());
			this->rdbCreamCheese = (gcnew System::Windows::Forms::RadioButton());
			this->rdbBacon = (gcnew System::Windows::Forms::RadioButton());
			this->bntPedido = (gcnew System::Windows::Forms::Button());
			this->lblResPedido = (gcnew System::Windows::Forms::Label());
			this->ckbBebida = (gcnew System::Windows::Forms::CheckBox());
			this->cmbBebida = (gcnew System::Windows::Forms::ComboBox());
			this->lblAdicionais = (gcnew System::Windows::Forms::Label());
			this->btnConta = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnBemVindo
			// 
			this->btnBemVindo->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnBemVindo->ForeColor = System::Drawing::Color::Red;
			this->btnBemVindo->Location = System::Drawing::Point(93, 9);
			this->btnBemVindo->Name = L"btnBemVindo";
			this->btnBemVindo->Size = System::Drawing::Size(275, 48);
			this->btnBemVindo->TabIndex = 0;
			this->btnBemVindo->Text = L"Bom Apetite!";
			this->btnBemVindo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ckbEntrada
			// 
			this->ckbEntrada->AutoSize = true;
			this->ckbEntrada->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ckbEntrada->Location = System::Drawing::Point(20, 68);
			this->ckbEntrada->Name = L"ckbEntrada";
			this->ckbEntrada->Size = System::Drawing::Size(81, 24);
			this->ckbEntrada->TabIndex = 1;
			this->ckbEntrada->Text = L"Entrada";
			this->ckbEntrada->UseVisualStyleBackColor = true;
			this->ckbEntrada->CheckedChanged += gcnew System::EventHandler(this, &Form1::ckbEntrada_CheckedChanged);
			// 
			// ckbPrato
			// 
			this->ckbPrato->AutoSize = true;
			this->ckbPrato->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ckbPrato->Location = System::Drawing::Point(171, 68);
			this->ckbPrato->Name = L"ckbPrato";
			this->ckbPrato->Size = System::Drawing::Size(129, 24);
			this->ckbPrato->TabIndex = 2;
			this->ckbPrato->Text = L"Prato Principal";
			this->ckbPrato->UseVisualStyleBackColor = true;
			// 
			// cmbOpcaoEntrada
			// 
			this->cmbOpcaoEntrada->FormattingEnabled = true;
			this->cmbOpcaoEntrada->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->cmbOpcaoEntrada->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Batata Frita\t", L"Calabresa", L"Rã", L"Coelho", 
				L"Língua", L"Fígado"});
			this->cmbOpcaoEntrada->Location = System::Drawing::Point(20, 98);
			this->cmbOpcaoEntrada->Name = L"cmbOpcaoEntrada";
			this->cmbOpcaoEntrada->Size = System::Drawing::Size(124, 21);
			this->cmbOpcaoEntrada->TabIndex = 3;
			this->cmbOpcaoEntrada->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::cmbOpcaoEntrada_SelectedIndexChanged);
			// 
			// cmbOpcaoPrato
			// 
			this->cmbOpcaoPrato->FormattingEnabled = true;
			this->cmbOpcaoPrato->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"Salada Mista\t", L"Filé à Parmegiana\t\t\t", 
				L"Picanha ", L"Frango à Passarinho", L"Beringela à Milanesa", L"Lombo", L"Bisteca Mineira"});
			this->cmbOpcaoPrato->Location = System::Drawing::Point(171, 98);
			this->cmbOpcaoPrato->Name = L"cmbOpcaoPrato";
			this->cmbOpcaoPrato->Size = System::Drawing::Size(122, 21);
			this->cmbOpcaoPrato->TabIndex = 4;
			this->cmbOpcaoPrato->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::cmbOpcaoPrato_SelectedIndexChanged);
			// 
			// rdbPimenta
			// 
			this->rdbPimenta->AutoSize = true;
			this->rdbPimenta->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rdbPimenta->Location = System::Drawing::Point(190, 125);
			this->rdbPimenta->Name = L"rdbPimenta";
			this->rdbPimenta->Size = System::Drawing::Size(66, 17);
			this->rdbPimenta->TabIndex = 5;
			this->rdbPimenta->TabStop = true;
			this->rdbPimenta->Text = L"Pimenta";
			this->rdbPimenta->UseVisualStyleBackColor = true;
			// 
			// rdbCreamCheese
			// 
			this->rdbCreamCheese->AutoSize = true;
			this->rdbCreamCheese->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rdbCreamCheese->Location = System::Drawing::Point(190, 150);
			this->rdbCreamCheese->Name = L"rdbCreamCheese";
			this->rdbCreamCheese->Size = System::Drawing::Size(94, 17);
			this->rdbCreamCheese->TabIndex = 6;
			this->rdbCreamCheese->TabStop = true;
			this->rdbCreamCheese->Text = L"CreamCheese";
			this->rdbCreamCheese->UseVisualStyleBackColor = true;
			// 
			// rdbBacon
			// 
			this->rdbBacon->AutoSize = true;
			this->rdbBacon->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rdbBacon->Location = System::Drawing::Point(190, 173);
			this->rdbBacon->Name = L"rdbBacon";
			this->rdbBacon->Size = System::Drawing::Size(56, 17);
			this->rdbBacon->TabIndex = 7;
			this->rdbBacon->TabStop = true;
			this->rdbBacon->Text = L"Bacon";
			this->rdbBacon->UseVisualStyleBackColor = true;
			// 
			// bntPedido
			// 
			this->bntPedido->BackColor = System::Drawing::Color::WhiteSmoke;
			this->bntPedido->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bntPedido->Location = System::Drawing::Point(142, 196);
			this->bntPedido->Name = L"bntPedido";
			this->bntPedido->Size = System::Drawing::Size(168, 56);
			this->bntPedido->TabIndex = 8;
			this->bntPedido->Text = L"Realizar Pedido";
			this->bntPedido->UseVisualStyleBackColor = false;
			this->bntPedido->Click += gcnew System::EventHandler(this, &Form1::bntPedido_Click);
			// 
			// lblResPedido
			// 
			this->lblResPedido->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblResPedido->Location = System::Drawing::Point(16, 255);
			this->lblResPedido->Name = L"lblResPedido";
			this->lblResPedido->Size = System::Drawing::Size(443, 23);
			this->lblResPedido->TabIndex = 9;
			this->lblResPedido->Text = L"Aguardando o pedido...";
			// 
			// ckbBebida
			// 
			this->ckbBebida->AutoSize = true;
			this->ckbBebida->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ckbBebida->Location = System::Drawing::Point(317, 68);
			this->ckbBebida->Name = L"ckbBebida";
			this->ckbBebida->Size = System::Drawing::Size(75, 24);
			this->ckbBebida->TabIndex = 10;
			this->ckbBebida->Text = L"Bebida";
			this->ckbBebida->UseVisualStyleBackColor = true;
			this->ckbBebida->CheckedChanged += gcnew System::EventHandler(this, &Form1::ckbBebida_CheckedChanged);
			// 
			// cmbBebida
			// 
			this->cmbBebida->FormattingEnabled = true;
			this->cmbBebida->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"Chá", L"Água com gás", L"Água sem gás", L"Coca-Cola", 
				L"Pepsi", L"Guraná Antártica", L"Brahma", L"Skol", L"Itaipava", L"Heineken", L"Capirinha(limão)", L"Caipirinha(morango)"});
			this->cmbBebida->Location = System::Drawing::Point(317, 98);
			this->cmbBebida->Name = L"cmbBebida";
			this->cmbBebida->Size = System::Drawing::Size(121, 21);
			this->cmbBebida->TabIndex = 11;
			this->cmbBebida->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::cmbBebida_SelectedIndexChanged);
			// 
			// lblAdicionais
			// 
			this->lblAdicionais->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblAdicionais->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->lblAdicionais->Location = System::Drawing::Point(17, 278);
			this->lblAdicionais->Name = L"lblAdicionais";
			this->lblAdicionais->Size = System::Drawing::Size(447, 23);
			this->lblAdicionais->TabIndex = 12;
			this->lblAdicionais->Text = L"Aguardando Adicionais...";
			// 
			// btnConta
			// 
			this->btnConta->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnConta->Enabled = false;
			this->btnConta->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnConta->Location = System::Drawing::Point(171, 324);
			this->btnConta->Name = L"btnConta";
			this->btnConta->Size = System::Drawing::Size(146, 77);
			this->btnConta->TabIndex = 13;
			this->btnConta->Text = L"Finalizar Conta";
			this->btnConta->UseVisualStyleBackColor = false;
			this->btnConta->Click += gcnew System::EventHandler(this, &Form1::btnConta_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(153, 418);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 32);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Valor Final:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Salmon;
			this->ClientSize = System::Drawing::Size(471, 459);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnConta);
			this->Controls->Add(this->lblAdicionais);
			this->Controls->Add(this->cmbBebida);
			this->Controls->Add(this->ckbBebida);
			this->Controls->Add(this->lblResPedido);
			this->Controls->Add(this->bntPedido);
			this->Controls->Add(this->rdbBacon);
			this->Controls->Add(this->rdbCreamCheese);
			this->Controls->Add(this->rdbPimenta);
			this->Controls->Add(this->cmbOpcaoPrato);
			this->Controls->Add(this->cmbOpcaoEntrada);
			this->Controls->Add(this->ckbPrato);
			this->Controls->Add(this->ckbEntrada);
			this->Controls->Add(this->btnBemVindo);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		float ValorTotal;
		float * entradas; //= {1.2, 4.5, 6.7, 7.8, 8.9};
		float * pratos;
		float * bebidas;
		float * adicionais;

#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				cmbOpcaoEntrada->SelectedIndex=0;
				cmbOpcaoPrato->SelectedIndex=0;
				cmbBebida->SelectedIndex=0;
				entradas = new float[6];
				entradas[0] = 15.0f;
				entradas[1] = 20.0f;
				entradas[2] = 40.0f;
				entradas[3] = 30.0f;
				entradas[4] = 25.0f;
				entradas[5] = 25.0f;
				pratos=new float[7];
				pratos[0]= 30.0f;
				pratos[1]= 80.0f;
				pratos[2]= 80.0f;
				pratos[3]= 25.0f;
				pratos[4]= 35.0f;
				pratos[5]= 60.0f;
				pratos[6]= 50.0f;
				bebidas= new float[12];
				bebidas[0]=5.0f;
				bebidas[1]=2.5f;
				bebidas[2]=2.0f;
				bebidas[3]=4.0f;
				bebidas[4]=4.0f;
				bebidas[5]=4.0f;
				bebidas[6]=8.0f;
				bebidas[7]=9.0f;
				bebidas[8]=7.0f;
				bebidas[9]=10.0f;
				bebidas[10]=8.0f;
				bebidas[11]=10.0f;
				adicionais= new float[3];
				adicionais[0]=2.0f;
				adicionais[1]=3.0f;
				adicionais[2]=4.0f;
				ValorTotal=0.0f;


			 }
	private: System::Void ckbEntrada_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void cmbBebida_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		
		 }
private: System::Void ckbBebida_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void cmbOpcaoEntrada_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void cmbOpcaoPrato_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void bntPedido_Click(System::Object^  sender, System::EventArgs^  e) {
			 lblResPedido->Text= "Seu pedido:";
			 if(ckbEntrada->Checked)
				 lblResPedido->Text=lblResPedido->Text+cmbOpcaoEntrada->SelectedItem->ToString() +" , ";
			 if(ckbPrato->Checked)
				 lblResPedido->Text=lblResPedido->Text+cmbOpcaoPrato->SelectedItem->ToString() +" , ";
			 if(ckbBebida->Checked)
				 lblResPedido->Text=lblResPedido->Text + cmbBebida->SelectedItem->ToString() +" . ";
				lblAdicionais->Text="Adicionais:";
			 if(rdbPimenta->Checked)
				 lblAdicionais->Text=lblAdicionais->Text+"Pimenta.";
			 if(rdbCreamCheese->Checked)
				 lblAdicionais->Text=lblAdicionais->Text+"Cream Cheese.";
			 if(rdbBacon->Checked)
				 lblAdicionais->Text=lblAdicionais->Text+"Bacon.";
			 btnConta->Enabled=true;


		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 
		 }
private: System::Void btnConta_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(ckbEntrada->Checked)
				ValorTotal=ValorTotal+entradas[cmbOpcaoEntrada->SelectedIndex];
			 if(ckbPrato->Checked)
				ValorTotal=ValorTotal+pratos[cmbOpcaoPrato->SelectedIndex];
			 if(ckbBebida->Checked)
				ValorTotal=ValorTotal+bebidas[cmbBebida->SelectedIndex];
			 if(rdbPimenta->Checked)
				 ValorTotal=ValorTotal+adicionais[0];
			 if(rdbCreamCheese->Checked)
				 ValorTotal=ValorTotal+adicionais[1];
			 if(rdbBacon->Checked)
				 ValorTotal=ValorTotal+adicionais[2];
			 //label2->Text="R$"+System::Convert::ToString(ValorTotal)+",00";
			 label2->Text="R$"+ValorTotal.ToString(".00");
			 ValorTotal=0.f;
			 btnConta->Enabled=false;
			 
		 }
};
}

