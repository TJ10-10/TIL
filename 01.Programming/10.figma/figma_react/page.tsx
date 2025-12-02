'use client';

import ProfileCard from './components/ProfileCard';

export default function Page() {
  return (
    <main style={{ display: 'flex', justifyContent: 'center', marginTop: '3rem' }}>
    <ProfileCard
    name="エリン"
    bio="森のすみっこで物語を紡ぐ、なめこのエリンです"
    avatarUrl="https://placekitten.com/200/200"
    />
    </main>
  );
}
