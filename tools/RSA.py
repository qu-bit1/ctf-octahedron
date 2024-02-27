import requests

def reverse_rsa(cipher):
    """Reverses the RSA encryption algorithm using the LSB oracle."""

    plaintext = 0
    for i in range(32):
        lsb = requests.post('http://.../oracle', json={'cipher': cipher}).json()['lsb']
        plaintext |= lsb << i
    return plaintext

cipher = 'YOUR_CIPHERTEXT'

plaintext = reverse_rsa(cipher)

print(plaintext)
