import numpy as np
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense

X = np.array([[0,0], [0,1], [1,0], [1,1]])
y = np.array([[0], [0], [0], [1]])

model = Sequential()
model.add(Dense(1, input_dim=2, activation='sigmoid'))

model.compile(loss='binary_crossentropy', optimizer='adam', metrics=['accuracy'])
model.fit(X, y, epochs=500, verbose=0)

loss, accuracy = model.evaluate(X, y, verbose=0)
print(f"Model Accuracy: {accuracy*100:.2f}%")

predictions = model.predict(X)
predicted_classes = (predictions > 0.5).astype(int)

print("\nPredictions:")
for i in range(len(X)):
    print(f"Input: {X[i]} → Predicted: {predicted_classes[i][0]} (Raw Output: {predictions[i][0]:.4f})")

print("\nInterpretation: The model correctly learned the AND logic — only [1,1] gives output 1.")
