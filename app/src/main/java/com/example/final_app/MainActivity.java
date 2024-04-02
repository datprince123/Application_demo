package com.example.final_app;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

import com.example.final_app.databinding.ActivityMainBinding;
public class MainActivity extends AppCompatActivity {
    static {
        System.loadLibrary("final_app");
        System.loadLibrary("TodoItem");
    }
    private ActivityMainBinding binding;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        binding = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());
        // Example of a call to a native method
        TextView tv = binding.sampleText;
        tv.setText(stringFromJNI());
    }
    public native String stringFromJNI();
}

