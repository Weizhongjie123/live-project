//ɾ��ѧ����Ϣ
void del()
{
	int i, j, flag = 0;
	char s1[LEN + 1];
	printf("����Ҫɾ��ѧ����ѧ��:\n");
	scanf("%s", s1);
	for (i = 0; i < n; i++){
		if (strcpy(stu[i].StudentId, s1) == 0){
			flag = 1;
			for (j = i; j < n - 1; j++){
				stu[j] = stu[j + 1];
			}
		}
	}
		if (flag == 0){
			printf("��ѧ��������!!!\n");
		}
		if (flag == 1){
			printf("ɾ���ɹ�������");
			n--;
		}
}