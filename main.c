#include <stdio.h>

#include <stdio.h>

void reverse_bits(int *input, int *output)
{
    int number = *input;
    int reversed = 0;

    // 2進数のビットを下位から取り出して逆順に並べる
    while (number > 0) {
        reversed = (reversed << 1) | (number & 1);
        number >>= 1;
    }

    // 反転した結果をポインタを使って渡す
    *output = reversed;
}

int main(void)
{
    int input_number, output_number;

    scanf("%d", &input_number);

    // 入力が0以下の場合はNGと表示する
    if (input_number <= 0) {
        printf("NG");
        return 0;
    }

    reverse_bits(&input_number, &output_number);

    printf("%d,%d", input_number, output_number);

    return 0;
}
