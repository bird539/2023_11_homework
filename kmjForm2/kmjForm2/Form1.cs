namespace kmjForm2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void checkedListBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label1_Click_1(object sender, EventArgs e)
        {

        }

        private void panel4_Paint(object sender, PaintEventArgs e)
        {

        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            label1.TextAlign = ContentAlignment.MiddleLeft;
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            label1.TextAlign = ContentAlignment.MiddleRight;
        }

        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {
            label1.TextAlign = ContentAlignment.MiddleCenter;
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox1.Checked == true)
            {
                Font font = new Font(label1.Font, label1.Font.Style | FontStyle.Bold);
                label1.Font = font;
            }
            else
            {
                Font font = new Font(label1.Font, label1.Font.Style ^ FontStyle.Bold);
                label1.Font = font;
            }
        }

        private void checkBox2_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox1.Checked == true)
            {
                Font font = new Font(label1.Font, label1.Font.Style | FontStyle.Underline);
                label1.Font = font;
            }
            else
            {
                Font font = new Font(label1.Font, label1.Font.Style ^ FontStyle.Underline);
                label1.Font = font;
            }
        }

        private void checkBox3_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox1.Checked == true)
            {
                Font font = new Font(label1.Font, label1.Font.Style | FontStyle.Italic);
                label1.Font = font;
            }
            else
            {
                Font font = new Font(label1.Font, label1.Font.Style ^ FontStyle.Italic);
                label1.Font = font;
            }
        }

        private void checkBox4_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox1.Checked == true)
            {
                Font font = new Font(label1.Font, label1.Font.Style | FontStyle.Strikeout);
                label1.Font = font;
            }
            else
            {
                Font font = new Font(label1.Font, label1.Font.Style ^ FontStyle.Strikeout);
                label1.Font = font;
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "" && textBox2.Text != "")
            {
                int result = int.Parse(textBox1.Text) + int.Parse(textBox2.Text);
                textBox3.Text = result.ToString();
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "" && textBox2.Text != "")
            {
                int result = int.Parse(textBox1.Text) - int.Parse(textBox2.Text);
                textBox3.Text = result.ToString();
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "" && textBox2.Text != "")
            {
                int result = int.Parse(textBox1.Text) * int.Parse(textBox2.Text);
                textBox3.Text = result.ToString();
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "" && textBox2.Text != "")
            {
                int result = int.Parse(textBox1.Text) / int.Parse(textBox2.Text);
                textBox3.Text = result.ToString();
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {
            int quota, reminder;
            quota = int.Parse(textBox4.Text);
            while (quota != 0)
            {
                quota = Math.DivRem(quota, 2, out reminder);
                textBox5.Text = textBox5.Text.Insert(0, reminder.ToString());
            }
        }

        private void radioButton4_CheckedChanged(object sender, EventArgs e)
        {
            listBox1.Items.Clear();
            listBox1.Items.Add("버튼");
            listBox1.Items.Add("체크 상자");
            listBox1.Items.Add("라디오 버튼");
        }

        private void radioButton5_CheckedChanged(object sender, EventArgs e)
        {
            listBox1.Items.Clear();
            listBox1.Items.Add("리스트 상자");
            listBox1.Items.Add("콤보 상자");
            listBox1.Items.Add("체크 리스트 상자");
        }

        private void button8_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "" && textBox2.Text != "")
            {
                int result = int.Parse(textBox1.Text) % int.Parse(textBox2.Text);
                textBox3.Text = result.ToString();
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (panel1.Visible == true && (panel2.Visible == false || panel3.Visible == false || panel4.Visible == false))
            {
                panel1.Visible = false;
                panel2.Visible = true;
            }
            else if (panel2.Visible == true && (panel1.Visible == false || panel3.Visible == false || panel4.Visible == false))
            {
                panel2.Visible = false;
                panel3.Visible = true;
            }
            else if (panel3.Visible == true && (panel2.Visible == false || panel1.Visible == false || panel4.Visible == false))
            {
                panel3.Visible = false;
                panel4.Visible = true;
            }
            else if (panel4.Visible == true && (panel2.Visible == false || panel1.Visible == false || panel3.Visible == false))
            {
                panel4.Visible = false;
                panel1.Visible = true;
            }
            else if(panel2.Visible == false && panel3.Visible == false || panel4.Visible == false || panel1.Visible == false)
            {
                panel1.Visible = true;
            }
        }
    }
}