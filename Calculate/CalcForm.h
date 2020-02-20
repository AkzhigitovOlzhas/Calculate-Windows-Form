#pragma once

namespace Calculate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CalcForm
	/// </summary>
	public ref class CalcForm : public System::Windows::Forms::Form
	{
	public:
		CalcForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CalcForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtDisplay;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btnP;
	protected:

	protected:




	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btnM;




	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btnU;




	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnTouch;
	private: System::Windows::Forms::Button^  btnR;
	private: System::Windows::Forms::Button^  btnD;




	private: System::Windows::Forms::Label^  lblShowOp;
	private: System::Windows::Forms::Button^  btnCE;
	private: System::Windows::Forms::Button^  btnC;
	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::Button^  btnMP;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CalcForm::typeid));
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnP = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnM = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnU = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnTouch = (gcnew System::Windows::Forms::Button());
			this->btnR = (gcnew System::Windows::Forms::Button());
			this->btnD = (gcnew System::Windows::Forms::Button());
			this->lblShowOp = (gcnew System::Windows::Forms::Label());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnMP = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::SystemColors::WindowText;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->ForeColor = System::Drawing::Color::White;
			this->txtDisplay->Location = System::Drawing::Point(6, 9);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(299, 42);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &CalcForm::txtDisplay_TextChanged);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::SystemColors::Desktop;
			this->btn7->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(5, 133);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(63, 55);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &CalcForm::button_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::SystemColors::Desktop;
			this->btn8->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(83, 133);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(63, 55);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &CalcForm::button_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::SystemColors::Desktop;
			this->btn9->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(163, 133);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(63, 55);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &CalcForm::button_Click);
			// 
			// btnP
			// 
			this->btnP->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnP->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnP->Location = System::Drawing::Point(241, 133);
			this->btnP->Name = L"btnP";
			this->btnP->Size = System::Drawing::Size(63, 55);
			this->btnP->TabIndex = 1;
			this->btnP->Text = L"+";
			this->btnP->UseVisualStyleBackColor = false;
			this->btnP->Click += gcnew System::EventHandler(this, &CalcForm::Arithmetic);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::SystemColors::Desktop;
			this->btn4->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(5, 194);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(63, 55);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &CalcForm::button_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::SystemColors::Desktop;
			this->btn5->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(83, 194);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(63, 55);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &CalcForm::button_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::SystemColors::Desktop;
			this->btn6->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(163, 194);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(63, 55);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &CalcForm::button_Click);
			// 
			// btnM
			// 
			this->btnM->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnM->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnM->ForeColor = System::Drawing::Color::White;
			this->btnM->Location = System::Drawing::Point(241, 194);
			this->btnM->Name = L"btnM";
			this->btnM->Size = System::Drawing::Size(63, 55);
			this->btnM->TabIndex = 1;
			this->btnM->Text = L"-";
			this->btnM->UseVisualStyleBackColor = false;
			this->btnM->Click += gcnew System::EventHandler(this, &CalcForm::Arithmetic);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::SystemColors::Desktop;
			this->btn1->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(5, 255);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(63, 55);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &CalcForm::button_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::SystemColors::Desktop;
			this->btn2->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(83, 255);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(63, 55);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &CalcForm::button_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::SystemColors::Desktop;
			this->btn3->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(163, 255);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(63, 55);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &CalcForm::button_Click);
			// 
			// btnU
			// 
			this->btnU->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnU->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnU->Location = System::Drawing::Point(242, 255);
			this->btnU->Name = L"btnU";
			this->btnU->Size = System::Drawing::Size(63, 55);
			this->btnU->TabIndex = 1;
			this->btnU->Text = L"*";
			this->btnU->UseVisualStyleBackColor = false;
			this->btnU->Click += gcnew System::EventHandler(this, &CalcForm::Arithmetic);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::SystemColors::Desktop;
			this->btn0->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(5, 316);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(63, 55);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &CalcForm::button_Click);
			// 
			// btnTouch
			// 
			this->btnTouch->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnTouch->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnTouch->Location = System::Drawing::Point(83, 316);
			this->btnTouch->Name = L"btnTouch";
			this->btnTouch->Size = System::Drawing::Size(63, 55);
			this->btnTouch->TabIndex = 1;
			this->btnTouch->Text = L".";
			this->btnTouch->UseVisualStyleBackColor = false;
			this->btnTouch->Click += gcnew System::EventHandler(this, &CalcForm::btnTouch_Click);
			// 
			// btnR
			// 
			this->btnR->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnR->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnR->Location = System::Drawing::Point(163, 316);
			this->btnR->Name = L"btnR";
			this->btnR->Size = System::Drawing::Size(63, 55);
			this->btnR->TabIndex = 1;
			this->btnR->Text = L"=";
			this->btnR->UseVisualStyleBackColor = false;
			this->btnR->Click += gcnew System::EventHandler(this, &CalcForm::btnR_Click);
			// 
			// btnD
			// 
			this->btnD->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnD->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnD->Location = System::Drawing::Point(241, 316);
			this->btnD->Name = L"btnD";
			this->btnD->Size = System::Drawing::Size(63, 55);
			this->btnD->TabIndex = 1;
			this->btnD->Text = L"/";
			this->btnD->UseVisualStyleBackColor = false;
			this->btnD->Click += gcnew System::EventHandler(this, &CalcForm::Arithmetic);
			// 
			// lblShowOp
			// 
			this->lblShowOp->AutoSize = true;
			this->lblShowOp->BackColor = System::Drawing::Color::Black;
			this->lblShowOp->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblShowOp->Location = System::Drawing::Point(11, 15);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(0, 24);
			this->lblShowOp->TabIndex = 2;
			// 
			// btnCE
			// 
			this->btnCE->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnCE->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnCE->Location = System::Drawing::Point(83, 72);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(63, 55);
			this->btnCE->TabIndex = 1;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = false;
			this->btnCE->Click += gcnew System::EventHandler(this, &CalcForm::btnCE_Click);
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnC->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnC->Location = System::Drawing::Point(163, 72);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(63, 55);
			this->btnC->TabIndex = 1;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &CalcForm::btnC_Click);
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Wingdings 3", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnBack->Location = System::Drawing::Point(6, 72);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(63, 55);
			this->btnBack->TabIndex = 1;
			this->btnBack->Text = L"f";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &CalcForm::btnBack_Click);
			// 
			// btnMP
			// 
			this->btnMP->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnMP->Font = (gcnew System::Drawing::Font(L"EagleSans-Bold", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnMP->Location = System::Drawing::Point(241, 72);
			this->btnMP->Name = L"btnMP";
			this->btnMP->Size = System::Drawing::Size(63, 55);
			this->btnMP->TabIndex = 1;
			this->btnMP->Text = L"+/-";
			this->btnMP->UseVisualStyleBackColor = false;
			this->btnMP->Click += gcnew System::EventHandler(this, &CalcForm::btnMP_Click);
			// 
			// CalcForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Tomato;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(311, 374);
			this->Controls->Add(this->lblShowOp);
			this->Controls->Add(this->btnMP);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnD);
			this->Controls->Add(this->btnR);
			this->Controls->Add(this->btnU);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btnM);
			this->Controls->Add(this->btnTouch);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btnP);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->txtDisplay);
			this->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"CalcForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->TransparencyKey = System::Drawing::SystemColors::ActiveCaption;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double IFirstNum;
		double ISecondNum;
		double IResult;
		String^ IOperator;


private: System::Void btnC_Click(System::Object^  sender, System::EventArgs^  e) {
	txtDisplay->Text = "0";
	lblShowOp->Text = "";
}
private: System::Void btnCE_Click(System::Object^  sender, System::EventArgs^  e) {
	txtDisplay->Text = "0";
}
private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {
	Button^ numbers = safe_cast<Button^>(sender);
	if (txtDisplay->Text=="0")
	{
		txtDisplay->Text = numbers->Text;
	}
	else {
		txtDisplay->Text = txtDisplay->Text + numbers->Text;
	}
}

private: System::Void Arithmetic(System::Object^  sender, System::EventArgs^  e) {
	Button^ op = safe_cast<Button^>(sender);
	IFirstNum = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	IOperator = op->Text;
	lblShowOp->Text = System::Convert::ToString(IFirstNum) + " " + IOperator;

}
private: System::Void btnR_Click(System::Object^  sender, System::EventArgs^  e) {
	lblShowOp->Text = "";
	ISecondNum = Double::Parse(txtDisplay->Text);
	if (IOperator == "+") {
		IResult = IFirstNum + ISecondNum;
		txtDisplay->Text = System::Convert::ToString(IResult);
	}
	else if (IOperator == "-") {
		IResult = IFirstNum - ISecondNum;
		txtDisplay->Text = System::Convert::ToString(IResult);
	}
	else if (IOperator == "/") {
		IResult = IFirstNum / ISecondNum;
		txtDisplay->Text = System::Convert::ToString(IResult);
	}
	else if (IOperator == "*") {
		IResult = IFirstNum * ISecondNum;
		txtDisplay->Text = System::Convert::ToString(IResult);
	}
}
private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtDisplay->Text->Length > 0) {
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
}
private: System::Void txtDisplay_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (txtDisplay->Text == "") {
		txtDisplay->Text = "0";
	}
}
private: System::Void btnTouch_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!txtDisplay->Text->Contains("."))
	{
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}
private: System::Void btnMP_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtDisplay->Text->Contains("-"))
	{
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else {
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}
};
}
