import Image from 'next/image';
import styles from './ProfileCard.module.css';

type Props = {
  name: string;
  bio: string;
  avatarUrl: string;
};

export default function ProfileCard({ name, bio, avatarUrl }: Props) {
  return (
    <div className={styles.card}>
    <Image src={avatarUrl} alt={`${name}のアイコン`} width={80} height={80} className={styles.avatar} />
    <h2 className={styles.name}>{name}</h2>
    <p className={styles.bio}>{bio}</p>
    <button className={styles.button}>フォローする</button>
    </div>
  );
}
