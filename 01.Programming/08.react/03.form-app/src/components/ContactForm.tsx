import React, { useState } from 'react';
import { ContactFormData } from '../types/form';

const initialData: ContactFormData = {
  name: '',
  email: '',
  message: '',
};

export const ContactForm: React.FC = () => {
  const [formData, setFormData] = useState<ContactFormData>(initialData);

  const handleChange = (e: React.ChangeEvent<HTMLInputElement | HTMLTextAreaElement>) => {
    const { name, value } = e.target;
    setFormData(prev => ({...prev, [name]: value }));
  };

  return (
    <div>
    <h2>お問い合わせフォーム</h2>
    <form>
    <input
    type="text"
    name="name"
    placeholder="名前"
    value="{formData.name}
    onChange={handleChange}
    />
    <br />
    <input
    type="email"
    name="email"
    placeholder="メールアドレス"
    value={formData.email}
    onChange={handleChange}
    />
    <br />
    <textarea
    name="message"
    placeholder="メッセージ"
    value={formData.message}
    onChange={handleChange}
    />
    </form>

    <h3>入力の内容プレビュー</h3>
    <p>名前: {formData.name}</p>
    <p>メール: {formData.email}</p>
    <p>メッセージ: {formData.message}</p>
    </div>
  );
};
